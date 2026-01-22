# 🌐 Networking Basics

Read through these networking basics before doing networking experiments.
--

## 🖧 What Is a Computer Network?

A **computer network** is a collection of interconnected devices (computers, servers, routers, switches) that share data and resources. These devices communicate using agreed-upon rules called **protocols**.


## 📦 Data Communication Fundamentals

For communication to occur, the following components are required:

- **Sender** – The device that sends the data  
- **Receiver** – The device that receives the data  
- **Message** – The data being transmitted  
- **Medium** – The path used to transmit data (cable, fiber, Wi-Fi)  
- **Protocol** – The rules governing communication  

---

## 🧱 Network Models

### 🔹 OSI Model (Open Systems Interconnection)

The OSI model divides networking into **seven layers**, each with a specific role:

1. **Physical** – Cables, signals, hardware  
2. **Data Link** – MAC addresses, frames  
3. **Network** – IP addressing, routing  
4. **Transport** – TCP/UDP, reliable delivery  
5. **Session** – Session management  
6. **Presentation** – Data formatting, encryption  
7. **Application** – User-facing protocols (HTTP, FTP, DNS)

Understanding these layers helps identify where network problems occur.

---

### 🔹 TCP/IP Model

The TCP/IP model is a simplified, practical model used on the Internet:

- **Application Layer** – HTTP, FTP, SMTP, DNS  
- **Transport Layer** – TCP, UDP  
- **Internet Layer** – IP, ICMP  
- **Network Access Layer** – Ethernet, Wi-Fi  

Most networking commands used in the lab relate directly to this model.

---

## 🌍 IP Addressing

An **IP address** uniquely identifies a device on a network.

### Types of IP Addresses:
- **IPv4** – 32-bit address (e.g., `192.168.1.1`)  
- **IPv6** – 128-bit address (e.g., `2001:db8::1`)  

### Address Classes & CIDR
- IP addresses are divided using **subnets**
- CIDR notation (e.g., `/24`) defines network size

---

## 🧩 MAC Addresses

A **MAC (Media Access Control) address** is a unique hardware identifier assigned to a network interface.

- Works at the Data Link Layer  
- Used for communication within a local network  
- Resolved from IP addresses using **ARP**

---

## 🔄 Common Network Protocols

Understanding basic protocols is essential for lab work:

| Protocol | Purpose |
|--------|--------|
| **IP** | Logical addressing and routing |
| **TCP** | Reliable, connection-oriented communication |
| **UDP** | Fast, connectionless communication |
| **ICMP** | Error reporting and diagnostics |
| **ARP** | IP to MAC address resolution |
| **DNS** | Domain name resolution |
| **HTTP/HTTPS** | Web communication |
| **FTP** | File transfer |

---

## 📡 Ports and Services

Ports identify specific services running on a system.

### Common Port Numbers:
- **21** – FTP  
- **23** – Telnet  
- **53** – DNS  
- **80** – HTTP  
- **443** – HTTPS  

Networking labs often involve identifying open ports and services.

---

## 🛠️ Network Devices

You’ll frequently encounter these devices in lab setups:

- **Hub** – Broadcasts data to all devices  
- **Switch** – Sends data only to the intended device  
- **Router** – Connects different networks  
- **Firewall** – Controls network traffic based on rules  

---

## 🔍 Basic Network Troubleshooting Concepts

Before running commands, understand what you’re testing:

- **Connectivity** – Can the device be reached?  
- **Latency** – How long does data take to travel?  
- **Packet Loss** – Are packets being dropped?  
- **Routing** – What path does the data take?  

These concepts are directly tested using tools like `ping`, `traceroute`, and `netstat`.

---

## 🧪 Relevance to the Networking Lab

In the networking lab, you will:
- Configure network interfaces  
- Analyze connections and traffic  
- Test reachability and routing  
- Examine DNS and IP mappings  

A solid understanding of these basics ensures you can **interpret command output**, not just run commands.

---
