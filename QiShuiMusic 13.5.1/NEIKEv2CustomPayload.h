@interface NEIKEv2CustomPayload : NEIKEv2Payload
- (id)descriptionWithIndent:options:;
- (unsigned long long)type;
- (void).cxx_destruct;
- (BOOL)hasRequiredFields;
- (BOOL)generatePayloadData;
- (BOOL)parsePayloadData;
+ (id)copyTypeDescription;
@end
