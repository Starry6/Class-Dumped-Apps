@interface AWEIMCardBelowQuickEmoticonBoxView : UIStackView
@property (nonatomic) NSArray emoticonViewArray;
@property (nonatomic) @? didSelectedEmoticonBlock;
- (void)p_setupUI;
- (id)didSelectedEmoticonBlock;
- (void)p_didPressedEmoticonViewWithGesture:;
- (void)renderBoxViewWithModels:;
- (void)updateBGColorWithHasBackgroundImage:;
- (void)setDidSelectedEmoticonBlock:;
- (id)emoticonViewArray;
- (void)setEmoticonViewArray:;
- (id)initWithFrame:;
- (void).cxx_destruct;
@end
