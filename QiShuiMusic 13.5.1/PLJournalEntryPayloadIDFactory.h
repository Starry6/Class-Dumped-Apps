@interface PLJournalEntryPayloadIDFactory : NSObject
+ (id)payloadIDWithUUIDBytes:;
+ (id)payloadIDWithUUIDString:;
+ (id)payloadIDWithString:;
@end
