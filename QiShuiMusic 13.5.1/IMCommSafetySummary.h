@interface IMCommSafetySummary : NSObject
+ (void)registerEvent:eventType:messageGUID:chat:forImages:;
+ (id)primaryiCloudAccountIdentifier;
+ (id)recipientStrings:;
+ (void)registerEvent:eventType:messageGUID:chat:forImages:childID:deviceID:senderID:eventSender:;
@end
