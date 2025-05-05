@interface AFPropertyListResponseSerializer : AFHTTPResponseSerializer
@property (nonatomic) Q format;
@property (nonatomic) Q readOptions;
- (void)setReadOptions:;
- (unsigned long long)readOptions;
- (id)responseObjectForResponse:data:error:;
- (void)setFormat:;
- (id)init;
- (unsigned long long)format;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)copyWithZone:;
+ (id)serializerWithFormat:readOptions:;
+ (id)serializer;
@end
