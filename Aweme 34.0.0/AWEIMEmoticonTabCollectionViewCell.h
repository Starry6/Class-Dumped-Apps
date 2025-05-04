@interface AWEIMEmoticonTabCollectionViewCell : UICollectionViewCell
@property (nonatomic) UIImageView iconView;
@property (nonatomic) UIView redDot;
@property (nonatomic) BOOL userSelected;
@property (nonatomic) BOOL needRedDotGuide;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setRedDot:;
- (id)redDot;
- (BOOL)userSelected;
- (void)setUserSelected:;
- (void)setNeedRedDotGuide:;
- (BOOL)needRedDotGuide;
- (void)__refreshSelectedUI;
- (void)prepareForReuse;
- (id)initWithFrame:;
- (id)iconView;
- (void)setHighlighted:;
- (void)setIconView:;
- (void).cxx_destruct;
@end
