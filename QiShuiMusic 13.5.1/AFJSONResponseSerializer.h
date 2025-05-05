@interface AFJSONResponseSerializer : AFHTTPResponseSerializer
@property (nonatomic) Q readingOptions;
@property (nonatomic) BOOL removesKeysWithNullValues;
- (BOOL)removesKeysWithNullValues;
- (id)responseObjectForResponse:data:error:;
- (void)setReadingOptions:;
- (void)setRemovesKeysWithNullValues:;
- (id)init;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (unsigned long long)readingOptions;
- (id)copyWithZone:;
+ (id)serializerWithReadingOptions:;
+ (id)serializer;
@end
