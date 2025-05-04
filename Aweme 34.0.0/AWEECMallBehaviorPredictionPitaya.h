@interface AWEECMallBehaviorPredictionPitaya : NSObject
@property (nonatomic) NSMutableDictionary messageDict;
- (void)realRegisterMallBehaviorMessageHandler;
- (void)trackerPrefetchEvent:pitayaStatus:bizStatus:message:;
- (id)messageDict;
- (void)preloadOrderList:;
- (void)orderListRenderNoti:;
- (void)trackerEnterEvent:;
- (id)orderSchemaParams:;
- (void)setMessageDict:;
- (id)init;
- (void).cxx_destruct;
+ (void)registerMallBehaviorMessageHandler;
+ (id)sharedInstance;
@end
