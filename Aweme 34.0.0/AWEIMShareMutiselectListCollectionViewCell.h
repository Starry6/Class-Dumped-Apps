@interface AWEIMShareMutiselectListCollectionViewCell : AWEIMTranspondListCollectionViewCell
@property (nonatomic) UIView selectedContainerView;
@property (nonatomic) UIImageView selectedImageView;
@property (nonatomic) BOOL isSelected;
@property (nonatomic) UIColor selectedContainerViewColor;
@property (nonatomic) <AWEIMTranspondListCellActionDelegate> delegate;
@property (nonatomic) BOOL isFromFansGroupManage;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)selectedContainerView;
- (void)configWithShareModel:;
- (id)selectedContainerViewColor;
- (void)turnLabelToPassAMessage;
- (void)setSelectedContainerViewColor:;
- (void)setSelectedContainerView:;
- (void)setIsSelected:;
- (id)initWithFrame:;
- (BOOL)isSelected;
- (void)setHighlighted:;
- (void).cxx_destruct;
- (void)avatarTapped:;
- (id)selectedImageView;
- (void)setSelectedImageView:;
@end
