@interface MFMailboxUidTransformer : NSObject
- (id)init;
- (id)transformMailboxUid:uidToMailboxMap:objectIDToUidMap:;
+ (BOOL)isMailbox:equalTo:uidToMailboxMap:;
@end
