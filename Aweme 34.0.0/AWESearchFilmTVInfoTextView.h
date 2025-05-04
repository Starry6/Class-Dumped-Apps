@interface AWESearchFilmTVInfoTextView : UIView
@property (nonatomic) NSArray titleArray;
@property (nonatomic) NSArray labelsArray;
@property (nonatomic) AWESearchFilmTVRateView rateView;
@property (nonatomic) UILabel rateLabel;
- (id)labelsArray;
- (id)rateView;
- (void)setRateView:;
- (id)rateLabel;
- (void)setRateLabel:;
- (id)titleArray;
- (void)setTitleArray:;
- (void)updateInfoTextArray:;
- (void)updateRate:withString:;
- (void)setLabelsArray:;
- (id)initWithFrame:;
- (void).cxx_destruct;
@end
