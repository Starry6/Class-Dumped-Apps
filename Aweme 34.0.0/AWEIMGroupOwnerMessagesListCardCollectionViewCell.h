@interface AWEIMGroupOwnerMessagesListCardCollectionViewCell : AWEIMGroupOwnerMessagesListCollectionViewCell
@property (nonatomic) UIView bubbleView;
@property (nonatomic) UIImageView cardIconView;
@property (nonatomic) UIView imageContainerView;
@property (nonatomic) UILabel cardTitleLabel;
- (id)cardTitleLabel;
- (void)setCardTitleLabel:;
- (id)cardIconView;
- (void)setCardIconView:;
- (void)renderCustomizeContentWithVM:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)imageContainerView;
- (void)setImageContainerView:;
- (id)bubbleView;
- (void)setBubbleView:;
+ (id)identifier;
@end
