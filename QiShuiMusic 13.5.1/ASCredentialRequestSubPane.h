@interface ASCredentialRequestSubPane : NSObject
@property (nonatomic) UIView view;
@property (nonatomic) double customSpacingAfter;
- (id)initWithView:;
- (id)view;
- (void).cxx_destruct;
- (double)customSpacingAfter;
- (void)setCustomSpacingAfter:;
- (void)addToStackView:withCustomSpacingAfter:context:;
@end
