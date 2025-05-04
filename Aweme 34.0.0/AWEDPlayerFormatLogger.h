@interface AWEDPlayerFormatLogger : NSObject
+ (BOOL)enableFormatLogger;
+ (BOOL)enableFormatLoggerInstance;
+ (void)debugLogWithModel:;
+ (void)onlineLogWithModel:;
+ (BOOL)enableDowngrade;
+ (void)logWithLevel:where:what:eventType:itemID:playState:DPlayer:player:simplayer:ttplayer:extraDict:;
+ (id)extraDictWithEventType:itemID:playState:DPlayer:player:simplayer:ttplayer:extraDict:;
+ (void)logWithModel:;
+ (BOOL)enableFormatLog;
@end
