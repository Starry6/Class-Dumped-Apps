@interface AWEHPPinTopObserverManager : NSObject
@property (nonatomic) NSMutableDictionary observerDict;
- (BOOL)addObserver:withConfig:;
- (void)pinTopCompleteWithResult:context:;
- (void)componentShowWithContext:;
- (void)componentDismissWithReason:context:;
- (void)pinTopSuccessBubbleShowWithContext:;
- (void)pinTopSuccessBubbleHideWithContext:;
- (void)context:needModifyComponentUIModel:;
- (void)context:shouldComponentShow:;
- (BOOL)checkConfigValid:;
- (id)observerDict;
- (void)observerArray:count:context:shouldShowBlock:;
- (void)observerArray:count:context:shouldModifyBlock:;
- (void)setObserverDict:;
- (void)removeObserver:;
- (void).cxx_destruct;
@end
