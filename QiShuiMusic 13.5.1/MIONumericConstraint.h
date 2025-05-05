@interface MIONumericConstraint : NSObject
@property (nonatomic) NSNumber minNumber;
@property (nonatomic) NSNumber maxNumber;
@property (nonatomic) NSSet enumeratedNumbers;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithMinimum:maximum:;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)minNumber;
- (id)maxNumber;
- (id)enumeratedNumbers;
- (id)initWithEnumeratedNumbers:;
@end
