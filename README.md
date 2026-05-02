# Problem #1: Cinema Reservation System 🎬
**structured programming --- Questions are here [Sp Questions](https://drive.google.com/file/d/1S-RAHet_lT5M8o9CTlBqjueL0e8hQjGK/view)**

## 🚀 وصف البرنامج (The Project)
نظام بسيط بيخليك تدخل بيانات 3 قاعات سينما، وبعدين تحجز تذاكر. البرنامج بيتأكد لو فيه مكان فاضي (السعة 50 كرسي) وبيطلعلك رقم القاعة والباقي كام كرسي.

## 🛠️ رحلة تطوير الكود (The Evolution)

### ❌ المرحلة الأولى: الكود المبتدئ
في البداية، كنت كاتب الكود باستخدام if يدوية لكل قاعة.
*   **المشكلة:** الكود كان غير مرن، ولو القاعات زادت كنت هتعطل.

### ⚠️ المرحلة الثانية: مشكلة الـ Loop
لما استخدمت الـ for loop حطيت رسالة الـ "Error" جوه اللوب.
*   **النتيجة:** البرنامج كان بيطبع رسالة رفض مع كل قاعة مش مطابقة، وده كان بيعمل لغبطة في الـ Output.

### ✅ المرحلة الثالثة: الكود الاحترافي
ده الكود النهائي اللي استخدمت فيه الـ (bool found) Flag.
1. البرنامج بيدور في صمت.
2. بيشيك على السعة (capacity).
3. بيطبع النتيجة النهائية مرة واحدة بس بره الـ Loop.

## 🔗 روابط هامة (Links)
*   **my solution on Git hub: [Sheet_3_Structs.cpp](https://github.com/3MORA1/Continue-my-journey-/blob/main/Cinema_Reservation_System.cpp)**

---

# Problem #2: House System (Nested Structs) 🏠
استخدام ستركيت جوه ستركيت (Nested Structs) في المسألة دي، بدأت أطبق فكرة الـ Nested Structs عشان أمثل بيانات "بيت" كامل بكل تفاصيله (ستركت تانية).

## 📝 وصف المسألة (Problem Description)
الهدف هو بناء برنامج يسجل بيانات بيت (Address, Area, Price) وكمان بيانات الغرف اللي جواه (Dimensions). البرنامج بيحسب السعر الإجمالي بناءً على مساحة البيت، مع افتراض إن سعر المتر $200.

## 🛠️ إيه اللي عملته في الكود؟ (My Approach)
1. الـ Nested Structs بدل ما أعمل متغيرات كتير، نظمت البيانات في اثنين Structs:
*   **struct Room:** بيشيل الطول والعرض (Dimensions).
*   **struct House:** من النوع Object بيشيل العنوان، عدد الغرف، السعر، وجواه Room.

## 🔗 روابط هامة (Links)
*   **Doctor [Solution]: [Download Docx](https://drive.google.com/file/d/1qeL9lNOzV5FPA1B2oN1awbIszWjtUmZ2/view)**

---

# Problem #3: Student Status 🎓
لتنظيم بيانات الطلاب ومعالجتها بشكل فعال في المسألة دي، طبقت فكرة استخدام الـ Structs مع الـ Functions بشكل فعال.

## 📝 شرح المسألة (Problem Description)
الهدف هو بناء برنامج يسجل بيانات 4 طلاب، كل طالب ليه (ID، اسم، ودرجة). البرنامج بيقوم بتحديد حالة الطالب:
*   إذا كانت درجته أكبر من 60، تصبح حالته "ناجح" (P).
*   إذا كانت أقل، تصبح حالته "راسب" (F).

## 🔄 الفرق بين حلي وحل الدكتور (Comparison)
المميز في الكود بتاعي هو طريقة تنظيم الوصول للبيانات وتقسيم المهام:
*   **مكان تعريف البيانات:** في حلي: قمت بتعريف المصفوفة (Array) كمتغير عام (Global Variable) خارج الـ main لسهولة وصول جميع الدوال (Functions) إليها مباشرة. حل الدكتور: قام بتعريفها داخل الـ main وتمريرها كمعامل (Parameter) للدالة.
*   **تقسيم الـ Functions:** في حلي: قسمت الشغل لوظيفتين مستقلتين؛ واحدة للإدخال input() والتانية للحساب والطباعة status(). ده خلى الـ main عندي "نضيفة" جداً ومجرد استدعاء لأسماء الدوال.
*   **حل الدكتور:** استخدم دالة واحدة فقط لتحديث الحالة، بينما تمت عمليتي الإدخال والطباعة داخل الـ main.

## 🔗 روابط هامة (Links)
*   **كودي للمسألة الثالثة: [sheet_3_Structs.cpp](https://github.com/3MORA1/Continue-my-journey-/blob/main/Student_status.cpp)**
*   **حل الدكتور للمقارنة: [Sheet 4 Student Status.cpp](https://drive.google.com/file/d/18wTxE-CHMUQqJCauoYUi1YKJ3VQAuACS/view)**

---
**المشروع ده جزء من تدريبات مادة الـ Structured Programming - كلية الحاسبات والمعلومات - جامعة عين شمس.**


# Sheet 5 Problem 1 - Array Processor (C++)

هذا المشروع يقدم حلولاً مختلفة لمسألة معالجة الأرقام السالبة في المصفوفة باستخدام لغة C++.

This project demonstrates different implementations for processing negative numbers in an array using C++.


---


## 📝 وصف المسألة - Problem Task

المطلوب هو بناء برنامج يقوم بـ:


1. قراءة مجموعة أرقام وتخزينها في المصفوفة (Array).


2. إنشاء دالة (Function) تمر على العناصر وتغير أي رقم سالب إلى موجب (Absolute Value).


3. عرض المصفوفة بعد التحديث.


---


## 🛠 طرق الحل - Implementation Approaches


### 1. الطريقة الموزعة (My Implementation):

تعتمد على تقسيم البرنامج لـ 3 دوال (Modular Approach):


- `input()` : للإدخال.


- `invert()` : لمعالجة الأرقام.


- `diplay()` : للطباعة.


### 2. الطريقة الأكاديمية (Professor's Solution):

تعتمد على دالة واحدة للمعالجة مع التأكد من حجم المصفوفة:


- `check_Negation()` : تقوم بتبديل الإشارة مباشرة.


- استخدام `#define SIZE 20` لضمان عدم تجاوز حدود الذاكرة.


---



# Sheet 5 Problem 2 - Array Symbol Replacer

هذا المشروع يقدم حلاً للمسألة الثانية في Sheet 5، والتي تهدف إلى معالجة عناصر المصفوفة واستبدالها برموز بناءً على قيمتها (زوجي أو فردي).

This project provides a solution for Question 2 in Sheet 5, focusing on array element manipulation and conditional symbol replacement.


---


## 📝 وصف المسألة - Problem Task

المطلوب هو بناء برنامج يقوم بـ:


1. قراءة 10 أرقام من المستخدم وتخزينها في مصفوفة (Array).


2. استبدال كل رقم **زوجي (Even)** بنجمة `*`.


3. استبدال كل رقم **فردي (Odd)** بعلامة مئوية `%`.


4. ترك الرقم **صفر (Zero)** كما هو دون تغيير.


5. عرض المصفوفة النهائية بعد التعديل.


---


## 🛠 تحليل الحل الخاص بي - My Implementation Analysis

تعتمد طريقتي في الحل على تقسيم الكود إلى وظائف مستقلة لزيادة الكفاءة:


- `#define size 10`: لتحديد حجم ثابت للمصفوفة كما هو مطلوب في السؤال.


- `void input(char arr[])`: دالة مخصصة لاستقبال العناصر من المستخدم.


- `void check(char arr[])`: الدالة الأساسية التي تحتوي على المنطق البرمجي (Logic) للتمييز بين الزوجي والفردي مع استثناء الصفر (`if arr[i] != '0'`).


- `void display(char arr[])`: لطباعة النتيجة النهائية بشكل منظم.


---


## 💻 مثال للتشغيل - Sample Output


**Input (Your Array):**
```text
3
7
0
2
6
9
3
0
1
5
---



## Sheet 5 Problem 3 - Bank System Simulation

هذا المشروع هو محاكاة لنظام بنكي بسيط يسمح للمستخدم بإدارة رصيده من خلال عمليات الإيداع، السحب، وعرض الرصيد باستخدام لغة C++.

This project simulates a simple bank system that allows users to manage their balance through deposit, withdraw, and display operations.


---


## 📝 وصف المسألة - Problem Task

المطلوب هو بناء نظام بنكي يبدأ برصيد **1000 جنيه** ويقوم بالآتي:


1. عرض قائمة خيارات (Menu) للمستخدم تشمل: الإيداع، السحب، وعرض الرصيد.


2. عملية **الإيداع (Deposit)**: إضافة مبلغ محدد للرصيد الحالي.


3. عملية **السحب (Withdraw)**: خصم مبلغ محدد من الرصيد الحالي.


4. عملية **عرض الرصيد (Display balance)**: إظهار الرصيد الحالي في أي وقت.


5. استمرار البرنامج في العمل حتى يقرر المستخدم التوقف (Loop).


---


## 🛠 تحليل الحل الخاص بي - My Implementation Analysis

لقد استخدمت مفاهيم برمجية متقدمة لضمان عمل النظام بشكل صحيح:


- **Pass by Reference (`&balance`)**: قمت بتمرير الرصيد كـ Reference داخل دالة الـ `operation` لضمان تحديث قيمته الأصلية في الـ `main` بعد كل عملية.


- **Modular Design**: تقسيم الكود لدالة `menu()` للعرض ودالة `operation()` لمعالجة العمليات الحسابية.


- **Do-While Loop**: لضمان استمرار عمل البرنامج وسؤال المستخدم "Another Operation? (Y/N)" بعد كل عملية.


- **Switch-Case Structure**: للتبديل بين الخيارات المختلفة (1, 2, 3) بكفاءة عالية.


---


## 💻 مثال للتشغيل - Sample Output


**Operation Flow:**

```text
Choose your operation:
1. Deposit    2. Withdraw    3. Display balance
2
How much are you going to withdraw?
300
Another Operation? (Y/N)
y

Current Balance: 700
