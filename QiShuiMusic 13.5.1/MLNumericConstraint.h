@interface MLNumericConstraint : NSObject
@property (nonatomic) NSNumber minNumber;
@property (nonatomic) NSNumber maxNumber;
@property (nonatomic) NSSet enumeratedNumbers;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)minNumber;
- (void)setMinNumber:;
- (id)maxNumber;
- (void)setMaxNumber:;
- (id)enumeratedNumbers;
- (void)setEnumeratedNumbers:;
+ (BOOL)supportsSecureCoding;
+ (id)numericConstraintWithMinNumber:maxNumber:;
+ (id)numericConstraintWithEnumeratedNumbers:;
@end
