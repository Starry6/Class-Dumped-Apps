@interface AWELoginStrategySceneFailRemit : MTLModel
@property (nonatomic) q failRemitCounts;
@property (nonatomic) q failRemitDays;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)failRemitCounts;
- (void)setFailRemitCounts:;
- (long long)failRemitDays;
- (void)setFailRemitDays:;
+ (id)JSONKeyPathsByPropertyKey;
@end
