@interface UITextPasteCoordinator : NSObject
@property (nonatomic) <UITextPasteCoordinatorDelegate> delegate;
- (void)addItem:;
- (id)delegate;
- (void)_finish;
- (void).cxx_destruct;
- (id)initWithDelegate:;
- (void)setResult:forItem:;
- (BOOL)performBlockingWait:;
- (void)_determineFinished;
@end
