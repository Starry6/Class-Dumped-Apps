@interface DataDetectorsSourceAccess : NSObject
@property (nonatomic) {?=[8I]} auditToken;
@property (nonatomic) NSInteger processIdentifier;
@property (nonatomic) I userIdentifier;
- (void)setProcessIdentifier:;
- (void)setAuditToken:;
- (unsigned int)userIdentifier;
- (id)auditToken;
- (int)processIdentifier;
- (void)setUserIdentifier:;
- (void)fileForSourceRead:resourceType:withReply:;
- (void)filesForSourceRead:resourceType:withReply:;
- (void)writeSourceFromJSONFile:source:withReply:;
- (void)writeSourceFromRawData:source:signature:withReply:;
- (BOOL)privacyUserReadEntitled;
- (BOOL)privacyUserWriteEntitled;
- (BOOL)privacySystemWriteEntitled;
- (id)fileHandleForSourceRead:resourceType:;
- (BOOL)clientCanWriteSource:;
- (BOOL)pushSourcesContent:forSource:signature:;
@end
