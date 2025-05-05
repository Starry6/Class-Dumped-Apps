@interface EKSyncStatusChangeListener : NSObject
@property (nonatomic) <EKSyncStatusChangeListenerDelegate> delegate;
- (void)_eventStoreChanged:;
- (id)initWithEventStore:;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (void)_setupSources;
@end
