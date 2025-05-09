@interface IESLiveIMExtraTransport : NSObject
@property (nonatomic) BOOL isRunning;
@property (nonatomic) IESLiveIMAppInfo appInfo;
@property (nonatomic) q type;
@property (nonatomic) NSMutableDictionary context;
@property (nonatomic) NSObject<OS_dispatch_queue> decodeQueue;
@property (nonatomic) <IESLiveIMDecoder> transportDecoder;
@property (nonatomic) <IESLiveIMTransportDelegate> delegate;
@property (nonatomic) double lastMsgTimeStamp;
@property (nonatomic) double maxMsgDuration;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setDecodeQueue:;
- (id)decodeQueue;
- (void)inDataQueue:;
- (BOOL)isValidMessageFromHost:;
- (double)lastMsgTimeStamp;
- (double)maxMsgDuration;
- (void)onExtraReceivingMessage:;
- (void)setLastMsgTimeStamp:;
- (void)setMaxMsgDuration:;
- (void)setTransportDecoder:;
- (id)transportDecoder;
- (void)dealloc;
- (id)context;
- (void)start;
- (void)setDelegate:;
- (void)setType:;
- (void)stop;
- (void)setIsRunning:;
- (id)appInfo;
- (BOOL)isRunning;
- (long long)type;
- (id)delegate;
- (void).cxx_destruct;
- (void)setContext:;
- (void)setAppInfo:;
- (id)initWithAppInfo:;
@end
