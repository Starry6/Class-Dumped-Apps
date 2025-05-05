@interface UIAccessibilityLocationDescriptor : NSObject
@property (nonatomic) UIView view;
@property (nonatomic) {CGPoint=dd} point;
@property (nonatomic) NSString name;
@property (nonatomic) NSAttributedString attributedName;
- (id)point;
- (unsigned long long)hash;
- (id)view;
- (void).cxx_destruct;
- (id)name;
- (BOOL)isEqual:;
- (id)attributedName;
- (id)initWithName:view:;
- (id)initWithName:point:inView:;
- (id)initWithAttributedName:point:inView:;
@end
