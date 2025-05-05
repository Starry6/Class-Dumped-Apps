@interface PIABridgeAPIInfo : NSObject
@property (nonatomic) NSString APIName;
@property (nonatomic) @? APIHandler;
@property (nonatomic) q version;
@property (nonatomic) BOOL isSynchronous;
@property (nonatomic) BOOL isOnMainThread;
- (id)APIName;
- (id)APIHandler;
- (id)initWithName:version:isSynchronous:isOnMainThread:APIHandler:;
- (BOOL)isOnMainThread;
- (void)setAPIHandler:;
- (void)setAPIName:;
- (void)setIsOnMainThread:;
- (void)setIsSynchronous:;
- (void)setVersion:;
- (long long)version;
- (void).cxx_destruct;
- (BOOL)isSynchronous;
+ (id)APIInfoWithName:version:isSynchronous:isOnMainThread:APIHandler:;
+ (id)APIInfoWithName:version:APIHandler:;
@end
