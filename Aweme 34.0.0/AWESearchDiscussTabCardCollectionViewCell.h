@interface AWESearchDiscussTabCardCollectionViewCell : UICollectionViewCell
@property (nonatomic) UIView containerView;
@property (nonatomic) DUXBaseLabel label;
@property (nonatomic) BOOL isSelected;
@property (nonatomic) AWESearchDiscussTabColorModel color;
@property (nonatomic) BOOL isSticky;
- (void)updateSticky:;
- (void)setIsSticky:;
- (void)updateSelected:;
- (void)updateColorConfig:;
- (void)updateTabModel:;
- (void)setLabel:;
- (void)setIsSelected:;
- (id)color;
- (id)initWithFrame:;
- (void)setup;
- (id)containerView;
- (void)setColor:;
- (id)label;
- (BOOL)isSelected;
- (void)setContainerView:;
- (void).cxx_destruct;
- (BOOL)isSticky;
@end
