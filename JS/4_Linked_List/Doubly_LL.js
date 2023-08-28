class Node {
    constructor(d) {
        this.data = d;
        this.prev = null;
        this.next = null;
    }
}

function print(head) {
    let temp = head;

    while (temp !== null) {
        process.stdout.write(temp.data + " ");
        temp = temp.next;
    }

    console.log();
}

function getLength(head) {
    let length = 0;
    let temp = head;

    while (temp !== null) {
        length++;
        temp = temp.next;
    }

    return length;
}

function insertAtHead(tail, head, d) {
    if (head === null) {
        const temp = new Node(d);
        head = temp;
        tail = temp;
    } else {
        const temp = new Node(d);
        temp.next = head;
        head.prev = temp;
        head = temp;
    }
    return [tail, head];
}

function insertAtTail(tail, head, d) {
    if (head === null) {
        const temp = new Node(d);
        tail = temp;
        head = temp;
    } else {
        const temp = new Node(d);
        tail.next = temp;
        temp.prev = tail;
        tail = temp;
    }
    return [tail, head];
}

function insertAtPosition(tail, head, position, d) {
    if (position === 1) {
        [tail, head] = insertAtHead(tail, head, d);
        return [tail, head];
    }

    let temp = head;
    let cnt = 1;

    while (cnt < position - 1) {
        temp = temp.next;
        cnt++;
    }

    if (temp.next === null) {
        [tail, head] = insertAtTail(tail, head, d);
        return [tail, head];
    }

    const nodeToInsert = new Node(d);
    nodeToInsert.next = temp.next;
    temp.next.prev = nodeToInsert;
    temp.next = nodeToInsert;
    nodeToInsert.prev = temp;

    return [tail, head];
}

// Note: JavaScript does not require explicit memory management or deletion of nodes like C++

function main() {
    let head = null;
    let tail = null;

    print(head);
    insertAtTail(tail, head, 15);
    print(head);

    [tail, head] = insertAtHead(tail, head, 20);
    print(head);
    console.log(getLength(head));

    [tail, head] = insertAtPosition(tail, head, 2, 30);
    print(head);
}

main();
