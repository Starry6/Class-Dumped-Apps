@interface BDXLynxTextField : UITextField
@property (nonatomic) {UIEdgeInsets=dddd} padding;
@property (nonatomic) BOOL waitingDictationRecognition;
- (void)scrollTextFieldToVisibleIfNecessary;
- (void)BDXLynxInput_scrollTextFieldToVisibleIfNecessary;
- (BOOL)waitingDictationRecognition;
- (id)insertDictationResultPlaceholder;
- (void)removeDictationResultPlaceholder:willInsertResult:;
- (void)setPadding:;
- (id)editingRectForBounds:;
- (BOOL)canPerformAction:withSender:;
- (id)textRectForBounds:;
- (id)padding;
- (long long)editingInteractionConfiguration;
+ (void)lynxLazyLoad;
+ (void)swizzleInstanceMethod:with:;
@end
