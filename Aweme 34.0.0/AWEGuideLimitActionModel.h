@interface AWEGuideLimitActionModel : MTLModel
@property (nonatomic) q actionType;
@property (nonatomic) q accumulativeCount;
@property (nonatomic) q accumulativeExpire;
@property (nonatomic) q effectDuration;
@property (nonatomic) BOOL isAccumulation;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)effectDuration;
- (void)setEffectDuration:;
- (long long)accumulativeCount;
- (void)setAccumulativeCount:;
- (long long)accumulativeExpire;
- (void)setAccumulativeExpire:;
- (BOOL)isAccumulation;
- (void)setIsAccumulation:;
- (long long)actionType;
- (void)setActionType:;
+ (id)JSONKeyPathsByPropertyKey;
@end
