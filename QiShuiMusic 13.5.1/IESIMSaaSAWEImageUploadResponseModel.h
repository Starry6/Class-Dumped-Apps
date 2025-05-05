@interface IESIMSaaSAWEImageUploadResponseModel : IESIMBaseApiModel
@property (nonatomic) NSArray urlList;
@property (nonatomic) NSString uri;
@property (nonatomic) NSString verifyType;
- (id)urlList;
- (id)uri;
- (void).cxx_destruct;
- (void)setUri:;
- (id)verifyType;
- (void)setVerifyType:;
+ (id)JSONKeyPathsByPropertyKey;
@end
