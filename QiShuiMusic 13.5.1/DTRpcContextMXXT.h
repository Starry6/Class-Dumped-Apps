@interface DTRpcContextMXXT : NSObject
+ (BOOL)isForegroundRPC;
+ (void)removeRpcHeader;
+ (id)getRpcHeader;
+ (id)getRpcRespHeader;
+ (void)removeRpcRespHeader;
+ (void)setForegroundRPC:;
+ (void)setRpcHeader:;
+ (void)setRpcRespHeader:;
+ (void)setShouldShowFlow:;
+ (BOOL)shouldShowFlow;
@end
