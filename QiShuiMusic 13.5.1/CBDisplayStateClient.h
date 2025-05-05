@interface CBDisplayStateClient : NSObject
@property (nonatomic) <CBDisplayStateClientDelegate> completionDelegate;
@property (nonatomic) q displayMode;
- (id)init;
- (void)cancel;
- (void)dealloc;
- (long long)displayMode;
- (void)activate;
- (void)setCompletionDelegate:;
- (void)_removeCompletionDelegate;
- (void)_displayModeChangeCompletionHandler:;
- (BOOL)transitionToDisplayMode:withDuration:error:;
- (BOOL)switchToFlipbookState:error:;
- (id)completionDelegate;
@end
