@interface AWEPlayInteractionGenericButtonFrequencyConfigModel : MTLModel
@property (nonatomic) q period;
@property (nonatomic) q times;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)period;
- (id)init;
- (void)setPeriod:;
- (long long)times;
- (void)setTimes:;
+ (id)JSONKeyPathsByPropertyKey;
@end
