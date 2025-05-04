@interface AWEIMCombineShareDegradeManager : NSObject
+ (BOOL)isSupportCombineShareWithMessage:;
+ (id)degradeMessageDescribWithContentMessage:messageType:aweType:;
+ (id)degradeMessageWithSubMessage:;
+ (id)degradeMessageDescribWithMessageType:aweType:;
+ (BOOL)isSupportShowReferenceContentInCombineShare:aweType:;
+ (id)convertToIMMessageForHint:;
+ (id)p_convertToIMMessageForDisplay:;
+ (id)degradeMessageForce:contentMessage:;
+ (id)degradeMessageDescribWithContentMessage:;
+ (id)p_downgradeMessageDescribWithContentMessage:messageType:aweType:;
+ (id)textDescribeWithWithContentMessage:messageType:aweType:;
+ (id)defaultTextDescribe;
+ (id)p_convertCombineShareMessage:toIMMessageWithCalculateSize:;
+ (id)degradeMessageIfNeed:combineShareMessage:;
+ (BOOL)isSupportCombineShareImportWithMessage:;
@end
