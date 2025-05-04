@interface AWEMusicDetailInspirationCollectionViewCell : UICollectionViewCell
@property (nonatomic) AWEMusicDetailInspirationItemView inspirationView;
@property (nonatomic) UIView titlePlaceHolderView;
@property (nonatomic) @? rightButtonClickEvent;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)inspirationView;
- (void)configWithModel:coverLoadCompletion:;
- (id)titlePlaceHolderView;
- (void)setupPlaceHolderView;
- (id)rightButtonClickEvent;
- (void)setupInspirationInfoView;
- (void)setInspirationView:;
- (void)setRightButtonClickEvent:;
- (void)setTitlePlaceHolderView:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setupUI;
- (void)didTapRightButton;
@end
