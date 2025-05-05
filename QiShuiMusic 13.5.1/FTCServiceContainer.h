@interface FTCServiceContainer : NSObject
@property (nonatomic) FTCServiceMonitor monitor;
@property (nonatomic) NSMutableSet listeners;
- (BOOL)removeListenerID:;
- (void)dealloc;
- (id)listeners;
- (BOOL)hasListenerID:;
- (void)setMonitor:;
- (id)initWithServiceType:;
- (BOOL)addListenerID:;
- (id)monitor;
@end
