@interface SABlockingInfo : NSObject
@property (nonatomic) Q blockingTid;
@property (nonatomic) NSInteger blockingPid;
@property (nonatomic) NSString portName;
@property (nonatomic) Q portFlags;
@property (nonatomic) Q portDomain;
- (id)init;
- (id)portName;
- (id)_init;
- (unsigned long long)blockingTid;
- (int)blockingPid;
- (unsigned long long)portFlags;
- (unsigned long long)portDomain;
- (BOOL)hasMatchingBlocker:;
@end
