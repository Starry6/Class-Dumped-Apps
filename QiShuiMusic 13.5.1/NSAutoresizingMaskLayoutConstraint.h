@interface NSAutoresizingMaskLayoutConstraint : NSLayoutConstraint
- (id)descriptionAccessory;
- (int)_constraintType;
- (id)_viewForAutoresizingMask;
+ (id)oldUIConstraintsWithAutoresizingMask:subitem:frame:superitem:bounds:;
+ (id)constraintsWithAutoresizingMask:subitem:frame:superitem:bounds:;
+ (id)constraintWithItem:attribute:relatedBy:toItem:attribute:multiplier:constant:;
@end
