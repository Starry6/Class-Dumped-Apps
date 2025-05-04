@interface AWEStudioAIEnhanceSecondaryPageInput : NSObject
@property (nonatomic) NSString creationID;
@property (nonatomic) AWEVideoPublishViewModel publishModel;
@property (nonatomic) NLEInterface_OC nleInterface;
@property (nonatomic) NSString placeholderImagePath;
@property (nonatomic) BOOL showLoading;
@property (nonatomic) q initIntensity;
@property (nonatomic) q defaultPointIntensity;
@property (nonatomic) NSDictionary coreBasicParams;
- (id)publishModel;
- (id)creationID;
- (id)nleInterface;
- (long long)initIntensity;
- (long long)defaultPointIntensity;
- (id)coreBasicParams;
- (id)placeholderImagePath;
- (void)setNleInterface:;
- (void)setShowLoading:;
- (void)setCreationID:;
- (void)setPublishModel:;
- (void)setPlaceholderImagePath:;
- (void)setInitIntensity:;
- (void)setDefaultPointIntensity:;
- (void)setCoreBasicParams:;
- (void).cxx_destruct;
- (BOOL)showLoading;
@end
