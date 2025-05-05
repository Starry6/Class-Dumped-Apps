@interface BU_AFXMLParserResponseSerializer : BU_AFHTTPResponseSerializer
- (id)responseObjectForResponse:data:error:;
- (id)init;
+ (id)serializer;
@end
