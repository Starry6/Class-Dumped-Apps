@interface AWEHashtagSuggestionViewConfig : NSObject
@property (nonatomic) Q style;
@property (nonatomic) q scrollViewIndicatorStyle;
@property (nonatomic) double cellHeight;
@property (nonatomic) UIColor nameColor;
@property (nonatomic) UIColor countColor;
@property (nonatomic) UIColor longCountColor;
@property (nonatomic) UIImage historyIcon;
@property (nonatomic) UIColor loadingImageColor;
@property (nonatomic) UIColor loadingTipColor;
- (id)loadingImageColor;
- (long long)scrollViewIndicatorStyle;
- (id)countColor;
- (id)longCountColor;
- (id)historyIcon;
- (id)loadingTipColor;
- (unsigned long long)style;
- (id)initWithStyle:;
- (void)setStyle:;
- (double)cellHeight;
- (id)nameColor;
@end
