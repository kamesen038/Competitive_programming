;; ABC171
;;A

(defun letter-check (string)
  (string= (string-upcase string) string)
  )

(defun solve (string)
  (if (letter-check string)
      (princ "A")
      (princ "a")
  )
  )

;;B
(defun split-and-parse-integer (string)
  (loop for i = 0 then (1+ j)
    as j = (position #\Space string :start i)
    collect (parse-integer (subseq string i j))
     while j))

(defparameter n (read))
(defparameter k (read))
(defparameter lst (split-and-parse-integer (read-line)))
(let ((sorted-lst (subseq (sort (copy-list lst) #'<)0 k ))
      )
  (loop for i
     in sorted-lst 
     sum i
       )
  )

;;C
(defparameter lst '())
(defun mod-dog (n)
  (print n)
  (if (> n 26)
      (mod-dog (floor n 26))
      (mod n 26)
      )
  )


(floor 123456789 26)

;; ABC170
;;A
(defun split-and-parse-integer (string)
  (loop for i = 0 then (1+ j)
    as j = (position #\Space string :start i)
    collect (parse-integer (subseq string i j))
    while j))

(defparameter i 1)

(defun solve (lst)
  (when (= (car lst) i)
    (setf i (+ i 1))
    (solve (cdr lst))
      )
)

(solve (split-and-parse-integer (read-line)))
(princ i)


;;B
(defparameter x (read))
(defparameter y (read))
(defparameter a (- (* x 2) (/ y 2)))
(defparameter b (/ (- y (* x 2)) 2))

(if (and (integerp a) (integerp b) (>= a 0) (>= b 0))
 (princ "Yes")
   (princ "No")
   )

;;C
(defun split-and-parse-integer (string)
  (loop for i = 0 then (1+ j)
    as j = (position #\Space string :start i)
    collect (parse-integer (subseq string i j))
    while j))
(defparameter x (read))
(defparameter n (read))
(if (not (= n 0))
(defparameter lst (split-and-parse-integer (read-line)))
(defparameter lst nil)
 )
(defparameter ans x)
(defparameter tmp 100)

(loop for i below 102
     do (if (and lst (not (find i lst)) (> tmp (abs (- x i))))
            (progn
              (setf ans i)
            (setf tmp (abs (- x i))) )
            )
      )

(princ ans)


;;problem A
(let ((a (read))
      (b (read)))
     (if (oddp (- a b))
         (princ "impossible")
         (princ (/ (+ a b) 2))
         ))


;;problem B
(defparameter *k* 1)
(defparameter *l* 0)

(defun cnt (lst)
  (if lst
      (progn (unless (equal (car lst) *k*)
	       (setf *l* (+ *l* 1)))
	     (setf *k* (+ *k* 1))
	     (cnt (cdr lst))
	     )
      *l*
      )
  )
 
      
	  
(let* ((n (read))
       (lst (loop :repeat n :collect (read)))
       )
(if (member (cnt lst) '(0 2))
    (princ "YES")
    (princ "NO")
    )
)




;;A

(let ((a (read))
      (b (read))
      )
     (princ (* a b)))
