@interface NEIKEv2EncryptedFragmentPayload : NEIKEv2EncryptedPayload
- (unsigned long long)type;
- (BOOL)hasRequiredFields;
- (BOOL)parsePayloadData;
+ (id)copyTypeDescription;
@end
