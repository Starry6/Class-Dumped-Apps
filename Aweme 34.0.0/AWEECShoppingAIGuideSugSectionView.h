@interface AWEECShoppingAIGuideSugSectionView : UIView
@property (nonatomic) UILabel sugLabel;
@property (nonatomic) AWEECShoppingGuideInputSugModel sectionInputSugModel;
@property (nonatomic) NSString rawQueryString;
@property (nonatomic) UIImageView sugImgView;
@property (nonatomic) UIView imageArrowTouchView;
@property (nonatomic) q sectionIndex;
@property (nonatomic) AWEECShoppingAIGuideContext context;
@property (nonatomic) AWEECShoppingGuideSUGModel data;
- (id)imageArrowTouchView;
- (id)sugImgView;
- (id)sugLabel;
- (void)labelOnTouchAction;
- (void)arrowOnTouchAction;
- (void)setRawQueryString:;
- (void)setSectionInputSugModel:;
- (id)sectionInputSugModel;
- (void)updateLabelContent:targetString:withIndex:withKeywords:;
- (void)setSugLabel:;
- (id)rawQueryString;
- (void)setSugImgView:;
- (void)setImageArrowTouchView:;
- (void)setData:;
- (void)setContext:;
- (void).cxx_destruct;
- (id)data;
- (id)context;
- (id)initWithFrame:context:;
- (long long)sectionIndex;
- (void)setSectionIndex:;
- (void)setupUI;
@end
