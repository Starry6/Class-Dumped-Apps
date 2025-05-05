@interface SFBlockBasedPopoverSourceInfo : NSObject
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} popoverSourceRect;
@property (nonatomic) UIView popoverSourceView;
@property (nonatomic) BOOL shouldDismissIfSourceRemovedAfterRepositioning;
@property (nonatomic) BOOL shouldPassthroughSuperview;
@property (nonatomic) BOOL shouldHideArrow;
@property (nonatomic) Q permittedArrowDirections;
@property (nonatomic) q provenance;
@property (nonatomic) UIBarButtonItem barButtonItem;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (unsigned long long)permittedArrowDirections;
- (id)barButtonItem;
- (long long)provenance;
- (id)popoverSourceView;
- (BOOL)shouldHideArrow;
- (void).cxx_destruct;
- (id)popoverSourceRect;
- (BOOL)shouldPassthroughSuperview;
- (id)initWithSourceInfoProvider:;
@end
