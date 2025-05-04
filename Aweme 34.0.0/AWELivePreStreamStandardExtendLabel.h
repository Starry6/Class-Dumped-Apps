@interface AWELivePreStreamStandardExtendLabel : UIView
@property (nonatomic) AWELivePreviewExtendArea extendData;
@property (nonatomic) UILabel needUpdateTimeLabel;
@property (nonatomic) UIView accessibilityView;
@property (nonatomic) NSString accessibilityText;
- (id)initWithExtendArea:;
- (void)updateGoldTaskEndTimeDesc;
- (id)extendData;
- (void)setExtendData:;
- (void)setAccessibilityView:;
- (id)accessibilityView;
- (id)createPartsView:;
- (double)realFont:fontShouldScale:;
- (void)setNeedUpdateTimeLabel:;
- (id)needUpdateTimeLabel;
- (void).cxx_destruct;
- (id)accessibilityText;
- (void)setAccessibilityText:;
@end
