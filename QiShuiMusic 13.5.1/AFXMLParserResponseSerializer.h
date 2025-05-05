@interface AFXMLParserResponseSerializer : AFHTTPResponseSerializer
- (id)responseObjectForResponse:data:error:;
- (id)init;
+ (id)serializer;
@end
