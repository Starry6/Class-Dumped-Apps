@interface EMHMERecipientCreationRequest : AARequest
- (id)urlString;
- (id)urlRequest;
- (void).cxx_destruct;
- (id)_httpBody;
- (id)initWithAccount:recipient:hmeAddress:;
+ (id)log;
+ (Class)responseClass;
+ (BOOL)canCreateHMEReplyToAddress:;
@end
