@interface AWELivePreStreamLiveSceneGuideManager : NSObject
@property (nonatomic) NSMutableDictionary cachePitayaMessageData;
@property (nonatomic) NSLock lock;
- (void)executeCallBackWithMessage:;
- (id)getCachePitayaMessageDataWithScene:;
- (void)deleteCachePitayaMessageWithScene:;
- (void)cachePitayaMessageData:;
- (id)cachePitayaMessageData;
- (void)setCachePitayaMessageData:;
- (id)init;
- (void)setLock:;
- (id)lock;
- (void).cxx_destruct;
+ (id)sharedManager;
@end
