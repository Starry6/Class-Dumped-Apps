@interface WeChatShareUrlCheckHandler : NSObject
+ (void)requestURLRuleWithTask:isAsync:;
+ (void)checkShouldTaskContinueAndMakeDecision:;
+ (BOOL)checkShouldTaskContinueWithRule:;
+ (id)genRecordDictWithRespConfigDict:;
+ (id)genUserDefaultsKeyWithAppid:;
+ (id)getSavedDictWithAppid:;
+ (void)saveRecordDic:withAppid:;
+ (void)startCheckWithShareUrlCheckTask:;
@end
