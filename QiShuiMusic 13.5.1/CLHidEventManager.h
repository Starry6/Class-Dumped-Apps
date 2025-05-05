@interface CLHidEventManager : NSObject
@property (nonatomic) <CLHidEventManagerDelegate> delegate;
@property (nonatomic) NSObject<OS_dispatch_queue> delegateQueue;
@property (nonatomic) HIDEventSystemClient manager;
@property (nonatomic) NSMutableArray matching;
- (void)dealloc;
- (void)setDelegate:;
- (id)delegateQueue;
- (id)manager;
- (id)delegate;
- (void)setMatching:;
- (id)matching;
- (id)initWithDelegate:queue:matching:type:;
@end
