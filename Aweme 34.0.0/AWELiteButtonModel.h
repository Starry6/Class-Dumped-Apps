@interface AWELiteButtonModel : MTLModel
@property (nonatomic) NSString title;
@property (nonatomic) NSString schema;
@property (nonatomic) NSString rewardNum;
@property (nonatomic) NSNumber playTime;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setPlayTime:;
- (BOOL)hasReward;
- (id)rewardNum;
- (BOOL)canShowMusicCoin;
- (void)setRewardNum:;
- (id)schema;
- (void)setSchema:;
- (id)playTime;
- (BOOL)isValid;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
+ (id)JSONKeyPathsByPropertyKey;
@end
