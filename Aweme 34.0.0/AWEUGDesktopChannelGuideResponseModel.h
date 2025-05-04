@interface AWEUGDesktopChannelGuideResponseModel : MTLModel
@property (nonatomic) NSString errorMsg;
@property (nonatomic) q errorCode;
@property (nonatomic) NSString businessId;
@property (nonatomic) double cacheTime;
@property (nonatomic) AWEUGDesktopChannelGuideConfigModel guideConfig;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setErrorMsg:;
- (id)errorMsg;
- (double)cacheTime;
- (void)setCacheTime:;
- (id)guideConfig;
- (void)setGuideConfig:;
- (void)setErrorCode:;
- (long long)errorCode;
- (id)businessId;
- (void).cxx_destruct;
- (void)setBusinessId:;
+ (id)JSONTransformerForKey:;
+ (id)JSONKeyPathsByPropertyKey;
@end
