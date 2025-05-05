@interface BDMannorRequestManger : NSObject
+ (id)dictForJson:;
+ (id)jsonToMannorModes:;
+ (id)jsonToSingleMannorMode:;
+ (void)request:callback:;
+ (void)request:params:callback:;
+ (void)sendRequestLogWith:error:jsonObj:;
+ (void)sendRequestMonitorWith:error:;
@end
