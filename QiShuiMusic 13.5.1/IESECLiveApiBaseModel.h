@interface IESECLiveApiBaseModel : MTLModel
@property (nonatomic) NSString requestID;
@property (nonatomic) NSNumber statusCode;
@property (nonatomic) NSString statusMsg;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setStatusMsg:;
- (id)statusMsg;
- (void)setStatusCode:;
- (id)statusCode;
- (id)requestID;
- (void).cxx_destruct;
- (void)setRequestID:;
+ (id)iesec_jsonArrayStringTransformer;
+ (id)mergeBaseApiPropertyKey:;
+ (id)JSONKeyPathsByPropertyKey;
@end
