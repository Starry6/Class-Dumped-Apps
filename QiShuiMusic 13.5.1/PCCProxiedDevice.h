@interface PCCProxiedDevice : NSObject
@property (nonatomic) double jobTimeout;
@property (nonatomic) BOOL preserveFiles;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)startTimer;
- (id)initWithEndpoint:;
- (void)handleMessage:from:;
- (void).cxx_destruct;
- (void)handleFile:from:metadata:;
- (void)ack:result:error:;
- (void)handleConnection:from:;
- (void)sendDeviceMetadata:;
- (void)acceptTaskingPayload:forRouting:withId:;
- (void)initiate:transferGroupWithOptions:job:;
- (void)initiate:transferLog:withOptions:job:;
- (BOOL)doWork:;
- (void)finish:target:event:type:result:;
- (double)jobTimeout;
- (void)setJobTimeout:;
- (BOOL)preserveFiles;
- (void)setPreserveFiles:;
@end
