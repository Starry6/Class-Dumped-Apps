@interface AWETaskInfoCardModel : MTLModel
@property (nonatomic) NSString title;
@property (nonatomic) NSString subTitle;
@property (nonatomic) NSString rewardTips;
@property (nonatomic) NSString iconURL;
@property (nonatomic) NSString highestProfit;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)rewardTips;
- (void)setRewardTips:;
- (id)highestProfit;
- (void)setHighestProfit:;
- (void)setIconURL:;
- (id)iconURL;
- (void)setSubTitle:;
- (id)subTitle;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
+ (id)JSONKeyPathsByPropertyKey;
@end
