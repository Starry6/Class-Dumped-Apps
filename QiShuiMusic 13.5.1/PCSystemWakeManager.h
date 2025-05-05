@interface PCSystemWakeManager : NSObject
+ (void)scheduleWake:wakeDate:acceptableDelay:userVisible:serviceIdentifier:uniqueIdentifier:;
@end
