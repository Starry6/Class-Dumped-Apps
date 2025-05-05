@interface CSJRewardLiveModel : NSObject
@property (nonatomic) q rewardLiveType;
@property (nonatomic) q rewardLiveStyle;
@property (nonatomic) NSString rewardLiveText;
@property (nonatomic) q rewardStartTime;
@property (nonatomic) q rewardCloseTime;
- (long long)rewardStartTime;
- (long long)rewardCloseTime;
- (long long)rewardLiveStyle;
- (id)csj_dictionaryValue;
- (id)rewardLiveText;
- (long long)rewardLiveType;
- (void)setRewardCloseTime:;
- (void)setRewardLiveStyle:;
- (void)setRewardLiveText:;
- (void)setRewardLiveType:;
- (void)setRewardStartTime:;
- (void)setupDataWithDictionary:;
- (id)initWithDictionary:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
@end
