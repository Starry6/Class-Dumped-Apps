@interface AWEIMSilverWingRecommendListView : UIStackView
@property (nonatomic) NSMutableArray listViewArray;
@property (nonatomic) q maxCount;
@property (nonatomic) @? didSelectedLisBlock;
- (void)p_didPressedEmoticonViewWithGesture:;
- (void)updateViewWithBackgroundImage:isBright:;
- (long long)hitWhichListViewWithGesture:;
- (void)setDidSelectedLisBlock:;
- (void)renderViewWithModels:;
- (id)listViewArray;
- (id)createTextViewWithViewModel:;
- (id)didSelectedLisBlock;
- (void)setListViewArray:;
- (void)setMaxCount:;
- (long long)maxCount;
- (id)initWithMaxCount:;
- (void).cxx_destruct;
@end
