@interface AWEIMFoldMessageUtility : NSObject
+ (BOOL)isNegativeMessage:;
+ (BOOL)needFoldForMessage:context:;
+ (void)removeNotUseExtForMessage:;
+ (BOOL)shouldInFoldContainerForMessage:context:;
+ (id)foldSizeForMessage:;
+ (double)foldMessageRadius;
+ (id)riskDisplayTextForIESMessage:;
+ (id)riskTypeForMessage:;
+ (BOOL)hasPunishMarkForMessageSynExt:;
+ (BOOL)needFoldForMessage:riskMessageViewViewModel:;
+ (BOOL)enableFoldPunishMessageExperiment:messageSynExt:;
+ (BOOL)haveFoldTipsForMessage:;
+ (void)checkAndSetFoldStatus:setFold:;
+ (BOOL)isNegativeIESMessage:;
+ (id)riskTypeForIESMessage:;
+ (BOOL)haveFoldTipsForIESMessage:;
@end
