@interface DOCUndoManager : NSUndoManager
@property (nonatomic) BOOL shouldRemoveAllActions;
- (id)init;
- (void)dealloc;
- (void)didPerformUndoableOperation;
- (void)startUndoNotificationsObservation;
- (void)stopUndoNotificationsObservation;
- (void)registerUndoOperationForSender:;
- (BOOL)isActionOperation:;
- (BOOL)shouldRemoveAllActions;
- (void)setShouldRemoveAllActions:;
+ (id)shared;
@end
