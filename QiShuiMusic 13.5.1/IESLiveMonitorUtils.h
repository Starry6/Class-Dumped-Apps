@interface IESLiveMonitorUtils : NSObject
+ (BOOL)isWebViewClass:;
+ (id)mergedSettingWithOnlineSetting:;
+ (BOOL)isSpecifiedClass:confirmsToSel:;
+ (void)addMethodToClass:selStr:funcPtr:hookMethod:desp:;
+ (id)convertAndTrimToJsonData:;
+ (id)convertToJsonData:;
+ (long long)formatedTimeInterval;
+ (id)getORIGImp:cls:ORIGCls:sel:;
+ (id)getORIGImp:cls:ORIGCls:sel:assert:;
+ (BOOL)hookMethod:fromSelStr:toSelStr:targetIMP:;
+ (id)hookMethod:sel:imp:;
+ (id)iesWebViewMonitorVersion;
+ (BOOL)isValidKeyWithDic:key:;
+ (id)pageNameForAttachView:;
+ (void)unHookMethod:sel:imp:;
+ (id)webkitVersion;
@end
