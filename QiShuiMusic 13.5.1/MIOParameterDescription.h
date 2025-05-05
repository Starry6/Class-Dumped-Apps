@interface MIOParameterDescription : NSObject
@property (nonatomic) NSString key;
@property (nonatomic) @ defaultValue;
@property (nonatomic) MIONumericConstraint numericConstraint;
- (id)key;
- (id)defaultValue;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)numericConstraint;
- (id)initWithKey:defaultValue:numericConstraint:;
- (id)initWithKey:doubleParameter:;
- (id)initWithKey:int64Parameter:;
- (id)initWithKey:boolParameter:;
- (id)initWithKey:stringParameter:;
@end
