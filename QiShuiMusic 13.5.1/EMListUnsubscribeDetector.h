@interface EMListUnsubscribeDetector : NSObject
- (id)init;
- (void).cxx_destruct;
- (id)initWithMutableDictionary:;
- (id)commandForMessage:;
- (void)acceptCommand:;
- (void)ignoreCommand:;
- (void)removeAllPersistedCommands;
- (id)_normalizedAddress:;
- (id)_listIDString:;
- (id)_senderString:;
- (id)_persistentKeyForHeaders:;
- (BOOL)_shouldIgnoreMessageWithHeaders:;
+ (id)validatedUnsubscribeTypeForHeader:;
+ (id)receivingAccountFromMessage:;
@end
