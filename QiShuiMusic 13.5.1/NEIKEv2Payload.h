@interface NEIKEv2Payload : NSObject
@property (nonatomic) BOOL hasRequiredFields;
@property (nonatomic) Q type;
- (id)init;
- (id)descriptionWithIndent:options:;
- (unsigned long long)type;
- (void).cxx_destruct;
- (BOOL)hasRequiredFields;
- (BOOL)generatePayloadData;
- (BOOL)parsePayloadData;
+ (id)copyTypeDescription;
@end
