@interface IMDDatabaseLegacyXPCBridge : NSObject
- (id)_xpcArrayWithChatRecords:;
- (id)_xpcArrayWithMessageRecords:;
- (id)_xpcArrayWithAttachmentRecords:;
- (id)_xpcArrayWithCodableObjects:;
- (id)_xpcDictionaryWithCodableObjects:;
- (id)_chatRecordsCopiedFromXPCArray:;
- (id)_messageRecordsCopiedFromXPCArray:;
- (id)_codableObjectsCopiedFromXPCArray:objectClass:;
- (id)_codableDictionaryCopiedFromXPCDictionary:objectClass:;
- (id)_attachmentRecordsCopiedFromXPCArray:;
@end
