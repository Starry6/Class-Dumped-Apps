@interface AWEIMImageUploadResponseModel : IESIMBaseApiModel
@property (nonatomic) NSArray urlList;
@property (nonatomic) NSString uri;
@property (nonatomic) NSString verifyType;
- (id)uri;
- (void)setUri:;
- (void).cxx_destruct;
- (void)setVerifyType:;
- (id)verifyType;
- (id)urlList;
+ (id)JSONKeyPathsByPropertyKey;
@end
