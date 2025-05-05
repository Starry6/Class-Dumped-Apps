@interface MSSendEmail : MSMailDefaultService
- (void)_simulateServicesMethod:arguments:callback:;
- (void)_sendEmail:playSound:completionBlock:;
- (void)_sendMessageData:autosaveIdentifier:isHMEMessage:sendLaterDate:completionBlock:;
+ (id)sendMessageData:autosaveIdentifier:isHMEMessage:sendLaterDate:completionBlock:;
+ (id)sendEmail:playSound:completionBlock:;
+ (id)sendEmail:playSound:timeout:error:;
@end
