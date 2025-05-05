@interface CJPayByteMethodNewCustomerSecondaryCell : UITableViewCell
@property (nonatomic) CJPayByteMethodNewCustomerSecondaryCollectionView collectionView;
@property (nonatomic) CJPayChannelBizModel data;
@property (nonatomic) <CJPayMethodTableViewDelegate> subPayDelegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setSubPayDelegate:;
- (id)subPayDelegate;
- (id)initWithStyle:reuseIdentifier:;
- (id)data;
- (void)setCollectionView:;
- (void).cxx_destruct;
- (void)setData:;
- (id)collectionView;
- (void)setupUI;
- (void)updateContent:;
+ (id)calHeight:;
@end
