@interface AWESearchAlienatedTabExitInfo : AWEBaseApiModel
@property (nonatomic) NSMutableArray shownDays;
@property (nonatomic) NSMutableArray noClickShownDays;
@property (nonatomic) NSMutableArray shownDaysWithBackDays;
@property (nonatomic) NSMutableArray noClickShownDaysWithBackDays;
@property (nonatomic) NSString exitDate;
@property (nonatomic) NSString noClickExitDate;
@property (nonatomic) NSString lastClickedDate;
- (id)shownDays;
- (id)noClickShownDays;
- (id)shownDaysWithBackDays;
- (id)noClickShownDaysWithBackDays;
- (id)noClickExitDate;
- (id)lastClickedDate;
- (void)setNoClickExitDate:;
- (void)setShownDays:;
- (void)setNoClickShownDays:;
- (void)setShownDaysWithBackDays:;
- (void)setNoClickShownDaysWithBackDays:;
- (void)setLastClickedDate:;
- (id)exitDate;
- (void).cxx_destruct;
- (void)setExitDate:;
+ (id)shownDaysJSONTransformer;
+ (id)noClickShownDaysJSONTransformer;
+ (id)shownDaysWithBackDaysJSONTransformer;
+ (id)noClickShownDaysWithBackDaysJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
