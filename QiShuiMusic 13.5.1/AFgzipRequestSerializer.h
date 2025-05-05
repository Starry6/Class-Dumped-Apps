@interface AFgzipRequestSerializer : AFHTTPRequestSerializer
@property (nonatomic) <AFURLRequestSerialization> serializer;
- (id)requestBySerializingRequest:withParameters:error:;
- (void)setSerializer:;
- (id)serializer;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)copyWithZone:;
+ (id)serializerWithSerializer:;
@end
