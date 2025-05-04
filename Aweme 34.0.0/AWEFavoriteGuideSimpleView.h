@interface AWEFavoriteGuideSimpleView : UIView
@property (nonatomic) @? cancelFavoriteAction;
@property (nonatomic) @? closeAction;
@property (nonatomic) @? showOnAction;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setCloseBlock:;
- (void)showOn:;
- (void)clickCancelFavoriteButton;
- (id)cancelFavoriteAction;
- (void)setCancelFavoriteAction:;
- (void)setShowOnAction:;
- (void)setCancelFavoriteBlock:;
- (id)showOnAction;
- (void)setShowOnBlock:;
- (void)setGotItBlock:;
- (void)appendCancelFavoriteBlock:;
- (void)appendCloseBlock:;
- (void)appendGotItBlock:;
- (void)appendShowOnBlock:;
- (void)close;
- (void)setCloseAction:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)closeAction;
- (void)setupUI;
@end
