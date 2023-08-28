class Node {
    constructor(data) {
        this.data = data;
        this.next = null;
    }

    // No explicit destructor needed in JavaScript
}

function insertAtHead(head, d) {
    const temp = new Node(d);
    temp.next = head;
    head = temp;
    return head;
}

function insertAtTail(tail, d) {
    const temp = new Node(d);
    tail.next = temp;
    tail = temp;
    return tail;
}

function print(head) {
    let temp = head;
    while (temp !== null) {
        process.stdout.write(temp.data + " ");
        temp = temp.next;
    }
    console.log();
}

function insertAtPosition(tail, head, position, d) {
    if (position === 1) {
        head = insertAtHead(head, d);
        return head;
    }

    let temp = head;
    let cnt = 1;

    while (cnt < position - 1) {
        temp = temp.next;
        cnt++;
    }

    if (temp.next === null) {
        tail = insertAtTail(tail, d);
        return head;
    }

    const nodeToInsert = new Node(d);
    nodeToInsert.next = temp.next;
    temp.next = nodeToInsert;
    return head;
}

function deleteNode(position, head) {
    if (position === 1) {
        const temp = head;
        head = head.next;

        temp.next = null;
        return head;
    } else {
        let curr = head;
        let prev = null;

        let cnt = 1;
        while (cnt < position) {
            prev = curr;
            curr = curr.next;
            cnt++;
        }

        prev.next = curr.next;
        curr.next = null;
        return head;
    }
}

function main() {
    const nodel = new Node(5);
    let head = nodel;
    let tail = nodel;

    print(head);

    head = insertAtHead(head, 10);
    print(head);
    head = insertAtHead(head, 20);
    print(head);

    tail = insertAtTail(tail, 30);
    print(head);
    tail = insertAtTail(tail, 40);
    print(head);
    tail = insertAtTail(tail, 50);
    print(head);

    head = insertAtPosition(tail, head, 4, 25);
    print(head);

    head = insertAtPosition(tail, head, 1, 30);
    print(head);

    head = deleteNode(4, head);
    print(head);

    console.log("head " + head.data);
    console.log("tail " + tail.data);
}

main();
