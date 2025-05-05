@interface UITextPasteController : NSObject
@property (nonatomic) <UITextPasteConfigurationSupporting_Internal> supportingView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithSupportingView:;
- (id)_combineItemAttributedStrings:forRange:;
- (void)_restorePasteResultForSession:;
- (void)setSupportingView:;
- (id)beginPastingItems:toRange:delegate:matchesTextStyles:;
- (id)beginDroppingItems:toSelectedRange:progressSupport:animated:delegate:;
- (void)_performPasteOfAttributedString:toRange:forSession:completion:;
- (BOOL)_pasteDelegateHandlesPasting;
- (id)beginPastingItems:toRange:;
- (void)coordinator:endPastingItems:;
- (void).cxx_destruct;
- (void)_executePasteForSession:;
- (id)beginDroppingItems:toSelectedRange:progressSupport:animated:;
- (id)_clampRange:;
- (id)supportingView;
- (void)_transformTextPasteItem:;
+ (id)combineAttributedStrings:addingSeparation:;
@end
