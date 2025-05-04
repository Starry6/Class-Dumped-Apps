@interface AWEEnterpriseIMRequestPushTool : NSObject
+ (void)submitRequestWithMessageInfo:;
+ (void)submitRequestWithMessageInfo:completeBlock:;
+ (void)autoGetPhoneNumberWithCompleteBlock:;
@end
