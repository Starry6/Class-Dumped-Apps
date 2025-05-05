@interface BU_AFJSONRequestSerializer : BU_AFHTTPRequestSerializer
@property (nonatomic) Q writingOptions;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) Q cachePolicy;
@property (nonatomic) double timeoutInterval;
@property (nonatomic) BOOL allowsCellularAccess;
- (id)requestBySerializingRequest:withParameters:error:;
- (unsigned long long)writingOptions;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)copyWithZone:;
- (void)setWritingOptions:;
+ (id)serializerWithWritingOptions:;
+ (id)serializer;
@end
