@interface NEIKEv2DeletePayload : NEIKEv2Payload
- (id)descriptionWithIndent:options:;
- (unsigned long long)type;
- (void).cxx_destruct;
- (id)description;
- (BOOL)hasRequiredFields;
- (BOOL)generatePayloadData;
- (BOOL)parsePayloadData;
+ (id)copyTypeDescription;
@end
