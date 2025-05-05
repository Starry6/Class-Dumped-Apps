@interface IMNicknameEncryptionHelpers : NSObject
+ (id)encryptAndTagPlainFields:withPreKey:returningRecordTag:error:;
+ (id)decryptAndVerifyCipherFields:withPreKey:recordTagToVerify:error:;
+ (id)_encryptAndTagPlainFields:withPreKey:returningRecordTag:error:;
+ (id)_decryptAndVerifyCipherFields:withPreKey:recordTagToVerify:error:;
+ (id)_encryptPlainFields:withFieldEncryptionKey:fieldTaggingKey:error:;
+ (id)_recordTagForCipherFields:recordTaggingKey:error:;
+ (id)_encryptPlainField:withFieldEncryptionKey:fieldTaggingKey:error:;
+ (id)_decryptCipherFields:withFieldEncryptionKey:fieldTaggingKey:error:;
+ (id)_decryptCipherField:withFieldEncryptionKey:fieldTaggingKey:error:;
+ (id)_performOperation:onData:withFieldEncryptionKey:iv:error:;
+ (id)_fieldTagForFieldName:cipherData:IV:fieldTaggingKey:error:;
+ (id)_tagForData:key:error:;
+ (id)_hmacForData:key:;
+ (id)_randomBytesWithLength:error:;
@end
