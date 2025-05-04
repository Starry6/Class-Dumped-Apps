@interface AWEChapterPanelVacantView : UIView
@property (nonatomic) NSString iconPath;
@property (nonatomic) NSString mainTitle;
@property (nonatomic) NSString detailTitle;
@property (nonatomic) NSString buttonText;
@property (nonatomic) @? clickAction;
- (id)clickAction;
- (void)setClickAction:;
- (void)configSubViews;
- (id)initWithMainTitle:detailTitle:iconPath:buttonText:;
- (id)buttonText;
- (void).cxx_destruct;
- (id)iconPath;
- (void)setIconPath:;
- (void)setButtonText:;
- (void)setDetailTitle:;
- (id)detailTitle;
- (id)mainTitle;
- (void)setMainTitle:;
@end
