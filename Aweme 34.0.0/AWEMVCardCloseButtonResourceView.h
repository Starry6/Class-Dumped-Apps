@interface AWEMVCardCloseButtonResourceView : UIView
@property (nonatomic) DUXBaseImageView closeIconView;
@property (nonatomic) AWEAwemeModel awemeModel;
@property (nonatomic) AWEDCFeedPageContext context;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)awemeModel;
- (void)setAwemeModel:;
- (void)configResourceWithAwemeModel:context:;
- (id)closeIconView;
- (void)setCloseIconView:;
- (void)onClickCloseBtn:;
- (id)init;
- (void)setContext:;
- (void).cxx_destruct;
- (id)context;
- (void)setupViews;
@end
