@interface AFJSONRequestSerializer : AFHTTPRequestSerializer
@property (nonatomic) Q writingOptions;
- (id)requestBySerializingRequest:withParameters:error:;
- (unsigned long long)writingOptions;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)copyWithZone:;
- (void)setWritingOptions:;
+ (id)serializerWithWritingOptions:;
+ (id)serializer;
@end
