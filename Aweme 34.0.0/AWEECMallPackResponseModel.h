@interface AWEECMallPackResponseModel : MTLModel
@property (nonatomic) NSArray infos;
@property (nonatomic) NSString requestId;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)infos;
- (void).cxx_destruct;
- (void)setRequestId:;
- (id)requestId;
- (void)setInfos:;
+ (id)infosJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
