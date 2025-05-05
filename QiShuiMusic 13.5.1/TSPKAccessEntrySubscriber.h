@interface TSPKAccessEntrySubscriber : NSObject
@property (nonatomic) NSString appstatus;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)canHandelEvent:;
- (void)applicationBecomeActive;
- (void)applicationBecomeInactive;
- (id)appstatus;
- (id)hanleEvent:;
- (void)setAppstatus:;
- (void)startObserverAppStatus;
- (id)init;
- (id)uniqueId;
- (void).cxx_destruct;
@end
