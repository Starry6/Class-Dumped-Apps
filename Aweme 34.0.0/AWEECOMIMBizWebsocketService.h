@interface AWEECOMIMBizWebsocketService : NSObject
@property (nonatomic) NSMutableDictionary wsUniqueKeyDict;
- (void)setWsUniqueKeyDict:;
- (id)wsUniqueKeyDict;
- (void)uploadPoorReplayEvent:completion:;
- (void)processWSMessage:;
- (id)init;
- (void).cxx_destruct;
+ (id)shared;
@end
