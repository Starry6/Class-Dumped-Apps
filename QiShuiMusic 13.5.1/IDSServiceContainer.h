@interface IDSServiceContainer : NSObject
@property (nonatomic) IDSServiceMonitor monitor;
@property (nonatomic) NSMutableSet listeners;
- (id)initWithService:;
- (BOOL)removeListenerID:;
- (id)listeners;
- (BOOL)hasListenerID:;
- (void)setMonitor:;
- (void).cxx_destruct;
- (BOOL)addListenerID:;
- (id)monitor;
@end
