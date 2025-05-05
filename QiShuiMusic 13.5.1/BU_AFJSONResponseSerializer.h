@interface BU_AFJSONResponseSerializer : BU_AFHTTPResponseSerializer
@property (nonatomic) Q readingOptions;
@property (nonatomic) BOOL removesKeysWithNullValues;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) NSIndexSet acceptableStatusCodes;
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
