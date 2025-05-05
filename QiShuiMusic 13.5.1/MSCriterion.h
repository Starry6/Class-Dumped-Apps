@interface MSCriterion : NSObject
- (id)init;
- (id)criteria;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)type;
- (void).cxx_destruct;
- (id)description;
- (id)qualifier;
- (id)initWithCriteria:allRequired:;
- (id)initWithType:qualifier:expression:;
- (id)_initWithType:qualifier:criteria:;
+ (BOOL)supportsSecureCoding;
@end
