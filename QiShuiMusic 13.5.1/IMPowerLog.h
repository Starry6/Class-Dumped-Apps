@interface IMPowerLog : NSObject
- (void)logMessageSentWithGUID:fromIdentifier:toIdentifier:conversationType:messageType:sendDuration:errorCode:;
- (void)logMessageReceivedWithGUID:fromIdentifier:toIdentifier:conversationType:messageType:;
- (void)logMessageSendFailureWithError:;
+ (id)sharedInstance;
@end
