@interface UIPrintQualityView : UIView
@property (nonatomic) UIPrintInfo printInfo;
@property (nonatomic) UIPrintSegmentedSlider qualitySlider;
@property (nonatomic) UILabel draftLabel;
@property (nonatomic) UILabel normalLabel;
@property (nonatomic) UILabel bestLabel;
- (void)dealloc;
- (void)observeValueForKeyPath:ofObject:change:context:;
- (void)setNormalLabel:;
- (id)printInfo;
- (void)setPrintInfo:;
- (void).cxx_destruct;
- (id)normalLabel;
- (void)loadViews;
- (void)updateFromPrintInfo;
- (void)changeQuality:;
- (id)initWithFrame:printInfo:;
- (id)qualitySlider;
- (void)setQualitySlider:;
- (id)draftLabel;
- (void)setDraftLabel:;
- (id)bestLabel;
- (void)setBestLabel:;
@end
