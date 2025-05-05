@interface SFCapsuleNavigationBarLabelLayoutInfo : NSObject
@property (nonatomic) UIView view;
@property (nonatomic) NSLayoutConstraint constraintToItemBelow;
@property (nonatomic) NSLayoutConstraint constraintToItemAbove;
@property (nonatomic) NSLayoutConstraint constraintForHorizontalAlignment;
- (id)initWithView:;
- (void)setConstraintToItemBelow:;
- (id)view;
- (id)constraintToItemBelow;
- (void)setConstraintForHorizontalAlignment:;
- (void).cxx_destruct;
- (id)constraintToItemAbove;
- (void)setConstraintToItemAbove:;
- (id)constraintForHorizontalAlignment;
@end
