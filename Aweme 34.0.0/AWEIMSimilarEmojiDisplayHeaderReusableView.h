@interface AWEIMSimilarEmojiDisplayHeaderReusableView : UICollectionReusableView
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) AWEIMSimilarEmoticonLayerView leftLineView;
@property (nonatomic) AWEIMSimilarEmoticonLayerView rightLineView;
- (id)leftLineView;
- (id)rightLineView;
- (void)setLeftLineView:;
- (void)setRightLineView:;
- (void)addAutoLayout;
- (void)addHotReloadColor;
- (void)updateSimilarEmoticonTitleWithType:;
- (id)initWithFrame:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)endColor;
- (id)startColor;
@end
