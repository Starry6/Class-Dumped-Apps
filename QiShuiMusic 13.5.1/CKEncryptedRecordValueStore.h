@interface CKEncryptedRecordValueStore : CKRecordValueStore
- (BOOL)isEncrypted;
- (void)_setObject:forKey:;
- (void)setCompatibilityModeObjectNoValidate:forKey:;
- (void)setObject:forKeyedSubscript:;
- (id)objectForKeyedSubscript:;
@end
