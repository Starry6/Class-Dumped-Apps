@interface NEIKEv2TrafficSelectorPayload : NEIKEv2Payload
- (id)descriptionWithIndent:options:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)hasRequiredFields;
- (BOOL)generatePayloadData;
- (BOOL)parsePayloadData;
+ (id)copyTypeDescription;
@end
