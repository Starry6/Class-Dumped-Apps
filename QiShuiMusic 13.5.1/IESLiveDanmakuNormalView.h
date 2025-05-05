@interface IESLiveDanmakuNormalView : IESLiveDanmakuBaseView
@property (nonatomic) UIView containerView;
@property (nonatomic) IESLiveDanmakuNormalLabel contentLabel;
@property (nonatomic) double cacheDanmukuWidth;
@property (nonatomic) <IESLiveLanguageService> languageService;
@property (nonatomic) IESLiveDanmakuNormalViewModel viewModel;
- (void)updateWithNode:;
- (void)_loadUI;
- (id)languageService;
- (double)cacheDanmukuWidth;
- (double)danmakuHeight;
- (void)disableLocalizations;
- (void)refreshDanmakuWithViewModel:;
- (void)setCacheDanmukuWidth:;
- (void)setLanguageService:;
- (BOOL)showContentBorder;
- (id)content;
- (id)init;
- (id)viewModel;
- (id)containerView;
- (void)setContainerView:;
- (void)prepareForReuse;
- (id)sizeThatFits:;
- (void).cxx_destruct;
- (void)setViewModel:;
- (id)contentLabel;
- (void)setContentLabel:;
@end
