@interface CDDCloudKitClient : NSObject
- (void)dealloc;
- (id)initWithMachServiceName:;
- (void)handleMessage:reply:;
- (BOOL)_valid;
@end
