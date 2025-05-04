@interface AWEDetailPageShootSameSchemaResultModel : MTLModel
@property (nonatomic) NSString shootSameSchema;
@property (nonatomic) NSString statusMessage;
@property (nonatomic) NSNumber statusCode;
@property (nonatomic) NSString requestID;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)shootSameSchema;
- (void)setShootSameSchema:;
- (id)statusCode;
- (id)requestID;
- (void)setRequestID:;
- (void).cxx_destruct;
- (void)setStatusCode:;
- (void)setStatusMessage:;
- (id)statusMessage;
+ (id)JSONKeyPathsByPropertyKey;
@end
