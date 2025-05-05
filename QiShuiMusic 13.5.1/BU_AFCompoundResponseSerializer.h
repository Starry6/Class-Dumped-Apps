@interface BU_AFCompoundResponseSerializer : BU_AFHTTPResponseSerializer
@property (nonatomic) NSArray responseSerializers;
- (id)responseObjectForResponse:data:error:;
- (id)responseSerializers;
- (void)setResponseSerializers:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)copyWithZone:;
+ (id)compoundSerializerWithResponseSerializers:;
@end
