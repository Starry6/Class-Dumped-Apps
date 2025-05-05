@interface AWEIMShareMutiselectListCollectionViewCell : AWEIMTranspondListCollectionViewCell
@property (nonatomic) UIView selectedContainerView;
@property (nonatomic) UIImageView selectedImageView;
@property (nonatomic) UIView bigMaskView;
@property (nonatomic) UIView smallMaskView;
@property (nonatomic) BOOL isSelected;
- (void)setBigMaskView:;
- (id)bigMaskView;
- (void)configWithShareModel:;
- (id)selectedContainerView;
- (void)setSelectedContainerView:;
- (void)setSmallMaskView:;
- (id)smallMaskView;
- (BOOL)isSelected;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setIsSelected:;
- (void)avatarTapped:;
- (id)selectedImageView;
- (void)setSelectedImageView:;
@end
