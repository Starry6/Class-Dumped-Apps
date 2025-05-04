@interface AWELuckyCatCoinAwardExit : MTLModel
@property (nonatomic) q coinFoldStatus;
@property (nonatomic) q coinCountStopStatus;
@property (nonatomic) q luckyBagStatus;
@property (nonatomic) NSDictionary extraTaskPageJumpLink;
@property (nonatomic) AWELuckyCatBubbleInfo coinBubbleInfo;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)coinFoldStatus;
- (void)setCoinFoldStatus:;
- (long long)coinCountStopStatus;
- (void)setCoinCountStopStatus:;
- (long long)luckyBagStatus;
- (void)setLuckyBagStatus:;
- (id)extraTaskPageJumpLink;
- (void)setExtraTaskPageJumpLink:;
- (id)coinBubbleInfo;
- (void)setCoinBubbleInfo:;
- (void).cxx_destruct;
+ (id)coinBubbleInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
