@interface AWENetworkCommonPushConfig : NSObject
@property (nonatomic) Q byteSyncThreadID;
@property (nonatomic) @? monitorBlock;
- (void)setMonitorBlock:;
- (unsigned long long)byteSyncThreadID;
- (void)setByteSyncThreadID:;
- (id)monitorBlock;
- (void).cxx_destruct;
@end
