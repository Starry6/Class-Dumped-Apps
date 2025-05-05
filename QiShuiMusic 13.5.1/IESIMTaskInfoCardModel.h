@interface IESIMTaskInfoCardModel : MTLModel
@property (nonatomic) NSString title;
@property (nonatomic) NSString subTitle;
@property (nonatomic) NSString rewardTips;
@property (nonatomic) NSString iconURL;
@property (nonatomic) NSString highestProfit;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)highestProfit;
- (id)rewardTips;
- (void)setHighestProfit:;
- (void)setRewardTips:;
- (void)setIconURL:;
- (void)setTitle:;
- (id)title;
- (void).cxx_destruct;
- (void)setSubTitle:;
- (id)iconURL;
- (id)subTitle;
+ (id)JSONKeyPathsByPropertyKey;
@end
