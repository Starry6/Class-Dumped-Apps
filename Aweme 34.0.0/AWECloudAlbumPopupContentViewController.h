@interface AWECloudAlbumPopupContentViewController : UIViewController
@property (nonatomic) UIView<AWECloudAlbumPopupContentViewProtocol> contentView;
@property (nonatomic) <AWECloudAlbumPopupVCProtocol> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)cancleAction;
- (id)initWithPopupContentView:;
- (id)delegate;
- (void)viewDidLoad;
- (id)contentView;
- (void).cxx_destruct;
- (void)setContentView:;
- (void)setDelegate:;
- (double)contentViewHeight;
@end
