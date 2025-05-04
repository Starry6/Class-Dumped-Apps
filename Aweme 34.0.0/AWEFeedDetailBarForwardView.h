@interface AWEFeedDetailBarForwardView : AWEFeedDetailBarActionBaseView
@property (nonatomic) AWEButton shareButton;
- (void)updateAwemeModel:;
- (BOOL)isEnableShowShareStoryButton;
- (void)resetLayoutWithShareButtonShow:;
- (void)trackShareButtonEvent:;
- (id)generateStoryModelWithEnterfrom:enterMethod:;
- (void)shareAsStoryButtonClicked;
- (BOOL)isForbiddenActionModelType;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)configureSubviews;
- (double)viewHeight;
- (void)setShareButton:;
- (id)shareButton;
- (double)viewWidth;
@end
