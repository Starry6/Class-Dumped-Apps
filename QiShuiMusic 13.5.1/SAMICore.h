@interface SAMICore : NSObject
@property (nonatomic) <SAMICoreCallbackListener> serverCallback_;
- (id)serverCallback_;
- (int)getProperty:withId:;
- (int)initDebugWithConfig:;
- (id)initWithIdentify:param:result:;
- (int)prepareBufferWithIdentify:numInBuffer:maxBlockSize:numChannel:isInterleave:;
- (int)processWithInBlock:outBlock:;
- (int)releaseDebugConfig;
- (int)setProperty:withId:;
- (void)setServerCallback_:;
- (void)dealloc;
- (void)destroy;
+ (void)SAMICoreUnregisterPrintStr2Log:;
+ (int)SAMICoreSetLogCallBack:;
+ (int)releaseContext:;
+ (void)SAMICoreRegisterPrintStr2Log:;
+ (int)initContextWithType:parameter:;
@end
