@interface SGEKEventConversions : NSObject
+ (id)urlForEKEventFromMailMessageWithId:sentAt:opaqueKey:;
+ (id)urlForMailMessageWithId:;
+ (id)urlForEKEventFromTextMessageWithUniqueIdentifier:;
@end
