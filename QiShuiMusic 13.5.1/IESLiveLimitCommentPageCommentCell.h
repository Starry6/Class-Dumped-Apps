@interface IESLiveLimitCommentPageCommentCell : UICollectionViewCell
@property (nonatomic) HTSLiveFixedChatSyncData limitData;
@property (nonatomic) NSArray titles;
@property (nonatomic) IESLiveLimitCommentPickerView pickerView;
@property (nonatomic) @? limitCommentPageCommentCellClickCallBack;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)limitCommentPageCommentCellClickCallBack;
- (id)limitData;
- (unsigned long long)numberOfItemsInPickerView:;
- (void)pickerView:didSelectItem:;
- (id)pickerView:titleForItem:;
- (void)setLimitCommentPageCommentCellClickCallBack:;
- (void)setLimitData:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setData:;
- (id)titles;
- (void)setTitles:;
- (void)setupUI;
- (id)pickerView;
- (void)setPickerView:;
@end
