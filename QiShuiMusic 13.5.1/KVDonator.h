@interface KVDonator : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> queue;
- (id)init;
- (void)donateWithOptions:usingStream:;
- (void)donateWithOptions:version:validity:usingStream:;
- (void).cxx_destruct;
- (id)initWithQueue:itemType:originAppId:deviceId:userId:serviceProvider:timeoutNanos:;
- (void)_donateWithServiceOptions:version:validity:usingStream:;
- (id)queue;
+ (id)donatorWithItemType:originAppId:deviceId:userId:error:;
+ (id)donatorWithServiceProvider:itemType:originAppId:error:;
+ (id)donatorWithItemType:originAppId:userId:error:;
+ (id)donatorWithServiceProvider:itemType:originAppId:deviceId:userId:error:;
+ (id)donatorWithItemType:originAppId:error:;
@end
