# Problem #1: Cinema Reservation System 🎬

**structured programming**
--- Questions are here [Sp Questions](https://docs.google.com/document/d/1S-RAHet_lT5M8o9CTlBqjueL0e8hQjGK/edit?usp=drivesdk&ouid=101344017193046992819&rtpof=true&sd=true)

## 🚀 وصف البرنامج (The Project)

نظام بسيط بيخليك تدخل بيانات 3 قاعات سينما، وبعدين تحجز تذاكر. البرنامج بيتأكد لو فيه مكان فاضي (السعة 50 كرسي) وبيطلعلك رقم القاعة والباقي كام كرسي.

---

## 🛠️ رحلة تطوير الكود (The Evolution)

### ❌ المرحلة الأولى: الكود المبتدئ
في البداية، كنت كاتب الكود باستخدام `if` يدوية لكل قاعة. 
*   **المشكلة:** الكود كان غير مرن، ولو القاعات زادت كنت هتعطل.

### ⚠️ المرحلة الثانية: مشكلة الـ Loop
لما استخدمت الـ `for loop` حطيت رسالة الـ "Error" جوه اللوب.
*   **النتيجة:** البرنامج كان بيطبع رسالة رفض مع كل قاعة مش مطابقة، وده كان بيعمل لغبطة في الـ Output.

### ✅ المرحلة الثالثة: الكود الاحترافي
ده الكود النهائي اللي استخدمت فيه الـ **Flag** (`bool found`).
1. البرنامج بيدور في صمت.
2. بيشيك على السعة (`capacity`).
3. بيطبع النتيجة النهائية مرة واحدة بس بره الـ Loop.

---

## 🔗 روابط هامة (Links)
my solution on Git hub(https://github.com/3MORA1/Continue-my-journey-/blob/main/Cinema_Reservation_System.cpp)
* **حل الدكتور (Professor's Solution):** [Doctor [Solution]](https://drive.google.com/file/d/1cphEs9raOJU7CHTr5LhgDs57uCOUYWGP/view?usp=drivesdk)
