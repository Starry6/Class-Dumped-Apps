@interface CMProxPDPManager : NSObject
@property (nonatomic) CMProxPDPManagerInternal _internal;
- (id)_internal;
- (id)init;
- (void)dealloc;
- (void)startPDPUpdatesWithHandler:;
+ (BOOL)isAvailable;
@end
