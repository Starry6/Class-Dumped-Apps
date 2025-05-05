@interface CTRemotePlanIdentifierList : NSObject
@property (nonatomic) NSArray planIdentifiers;
- (id)init;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)initWithPlanIdentifiers:;
- (id)planIdentifiers;
- (void)setPlanIdentifiers:;
+ (BOOL)supportsSecureCoding;
@end
