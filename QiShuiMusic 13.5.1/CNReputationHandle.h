@interface CNReputationHandle : NSObject
@property (nonatomic) NSString stringValue;
@property (nonatomic) q type;
- (unsigned long long)hash;
- (long long)type;
- (id)stringValue;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithStringValue:type:;
- (void)configureBuilder:;
+ (id)descriptionForType:;
+ (id)handleWithStringValue:;
+ (id)handleWithEmailAddress:;
+ (id)handleWithPhoneNumber:;
@end
