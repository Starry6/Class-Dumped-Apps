@interface AWEIMStrangerGreetingTableViewCell : AWEIMMessageBaseTableViewCell
@property (nonatomic) UILabel greetingLabel;
@property (nonatomic) UIButton closeButton;
@property (nonatomic) UICollectionView collectionView;
@property (nonatomic) UILabel noticeLabel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)closeButtonClicked:;
- (void)configWithMessage:;
- (id)greetingLabel;
- (void)p_updateGreetTip;
- (void)setGreetingLabel:;
- (void)layoutSubviews;
- (long long)collectionView:numberOfItemsInSection:;
- (id)collectionView:cellForItemAtIndexPath:;
- (void)collectionView:didSelectItemAtIndexPath:;
- (void)setCollectionView:;
- (void).cxx_destruct;
- (id)collectionView;
- (void)setupUI;
- (id)closeButton;
- (void)setCloseButton:;
- (id)noticeLabel;
- (void)setNoticeLabel:;
+ (id)contentSizeWithMesasge:;
+ (id)identifier;
@end
