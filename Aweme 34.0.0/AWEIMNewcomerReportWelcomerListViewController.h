@interface AWEIMNewcomerReportWelcomerListViewController : AWEIMHalfScreenContainerViewController
@property (nonatomic) <IESIMMessageProtocol> iesMsg;
@property (nonatomic) NSArray model;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIView lineView;
@property (nonatomic) UICollectionView collectionView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)__setupUI;
- (void)__fetchData;
- (id)iesMsg;
- (void)setIesMsg:;
- (id)initWithIesMsg:;
- (void)setModel:;
- (id)collectionView;
- (id)collectionView:cellForItemAtIndexPath:;
- (long long)numberOfSectionsInCollectionView:;
- (void)viewDidLoad;
- (void)setCollectionView:;
- (id)model;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (long long)collectionView:numberOfItemsInSection:;
- (id)titleLabel;
- (id)lineView;
- (void)setLineView:;
@end
