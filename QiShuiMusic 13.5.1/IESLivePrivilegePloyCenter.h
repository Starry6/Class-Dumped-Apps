@interface IESLivePrivilegePloyCenter : NSObject
+ (BOOL)privilege_enableVIPEntranceWithAnchor:;
+ (id)privilege_entranceBarStrategyFreqData;
+ (id)privilege_entranceBarStrategyLocateData;
+ (long long)privilege_lastNewStyleSelectStyleWithUserID:roomID:;
+ (void)privilege_saveDanmakuNewStyleSelectTabWithStyle:userID:roomID:;
+ (void)privilege_saveEntranceBarStrategyFreqData:;
+ (void)privilege_saveEntranceBarStrategyLocateData:;
+ (void)privilege_saveVIPEntranceWithAnchor:enableEntrance:;
@end
