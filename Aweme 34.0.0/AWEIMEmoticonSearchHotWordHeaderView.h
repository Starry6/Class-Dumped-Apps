@interface AWEIMEmoticonSearchHotWordHeaderView : UICollectionReusableView
@property (nonatomic) AWEIMEmoticonSearchPanelHotWordView hotWordView;
@property (nonatomic) @? didSelectHotWordBlock;
- (void)p_setupUI;
- (void)trackTagShow;
- (void)renderWithConfig:;
- (id)didSelectHotWordBlock;
- (void)setDidSelectHotWordBlock:;
- (id)composeRecommendWordsWithConfig:;
- (id)hotWordView;
- (void)setHotWordView:;
- (id)initWithFrame:;
- (void).cxx_destruct;
+ (id)preferedSize;
@end
