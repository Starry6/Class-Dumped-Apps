@interface AWEIMEnterpriseModeDataBannerStatsItemCellViewModel : NSObject
@property (nonatomic) AWEIMEnterpriseModeDataBannerStatisticItem statItem;
@property (nonatomic) double minimumRequiredWith;
@property (nonatomic) NSString showTips;
@property (nonatomic) double cellWidth;
- (id)statItem;
- (void)__calculateMinimumRequiredWidth;
- (void)setShowTips:;
- (id)initWithStatsItem:;
- (id)checkFTCIfShouldShowTips;
- (void)didShowTips;
- (void)setStatItem:;
- (double)minimumRequiredWith;
- (void)setMinimumRequiredWith:;
- (void).cxx_destruct;
- (double)cellWidth;
- (void)setCellWidth:;
- (id)showTips;
+ (id)titleLabelFont;
+ (id)subtitleLabelFont;
@end
