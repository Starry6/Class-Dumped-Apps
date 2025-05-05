@interface AFPropertyListRequestSerializer : AFHTTPRequestSerializer
@property (nonatomic) Q format;
@property (nonatomic) Q writeOptions;
- (id)requestBySerializingRequest:withParameters:error:;
- (void)setWriteOptions:;
- (void)setFormat:;
- (unsigned long long)format;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)copyWithZone:;
- (unsigned long long)writeOptions;
+ (id)serializerWithFormat:writeOptions:;
+ (id)serializer;
@end
