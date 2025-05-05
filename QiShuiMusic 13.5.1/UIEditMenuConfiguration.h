@interface UIEditMenuConfiguration : NSObject
@property (nonatomic) <NSCopying> identifier;
@property (nonatomic) {CGPoint=dd} sourcePoint;
@property (nonatomic) BOOL _ignoresPassthroughInView;
@property (nonatomic) UIResponder _firstResponderTarget;
@property (nonatomic) UIWindow _overrideSourceWindow;
@property (nonatomic) q preferredArrowDirection;
- (id)identifier;
- (void).cxx_destruct;
- (id)description;
- (void)setIdentifier:;
- (id)_firstResponderTarget;
- (id)sourcePoint;
- (void)setSourcePoint:;
- (long long)preferredArrowDirection;
- (void)setPreferredArrowDirection:;
- (BOOL)_ignoresPassthroughInView;
- (void)set_ignoresPassthroughInView:;
- (void)set_firstResponderTarget:;
- (id)_overrideSourceWindow;
- (void)set_overrideSourceWindow:;
+ (id)configurationWithIdentifier:sourcePoint:;
@end
