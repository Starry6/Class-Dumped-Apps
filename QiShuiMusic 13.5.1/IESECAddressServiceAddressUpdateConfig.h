@interface IESECAddressServiceAddressUpdateConfig : MTLModel
@property (nonatomic) q offsetDistance;
@property (nonatomic) q noGpsRequestInterval;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)noGpsRequestInterval;
- (long long)offsetDistance;
- (void)setNoGpsRequestInterval:;
- (void)setOffsetDistance:;
+ (id)JSONKeyPathsByPropertyKey;
@end
