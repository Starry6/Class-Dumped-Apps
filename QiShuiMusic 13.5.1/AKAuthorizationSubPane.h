@interface AKAuthorizationSubPane : NSObject
@property (nonatomic) UIView internalView;
@property (nonatomic) double internalCustomSpacingAfter;
@property (nonatomic) UIViewController viewController;
@property (nonatomic) UIView view;
@property (nonatomic) double customSpacingAfter;
- (id)initWithView:;
- (id)view;
- (id)viewController;
- (void).cxx_destruct;
- (id)initWithViewController:;
- (void)addToStackView:context:;
- (void)addToConstraints:context:;
- (double)customSpacingAfter;
- (void)setCustomSpacingAfter:;
- (id)internalView;
- (double)internalCustomSpacingAfter;
- (void)setInternalCustomSpacingAfter:;
@end
