@interface SFBarButtonItemLongPressGestureRecognizer : UILongPressGestureRecognizer
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)touchesBegan:withEvent:;
- (void)longPress:;
- (void)_updateMinimumPressDurationForContentSizeCategory:;
- (void)_contentSizeCategoryDidChange:;
- (void).cxx_destruct;
- (void)_invokeLongPressAction;
- (BOOL)gestureRecognizerShouldBegin:;
+ (id)gestureRecognizerTarget:longPressAction:touchDownAction:attachedToBarButtonItem:;
@end
