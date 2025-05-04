@interface AWEUGPendantActivityModel : MTLModel
@property (nonatomic) AWEUGPendantActivityInfo activityInfo;
@property (nonatomic) AWEUGPendantActivityConfig activityConfig;
@property (nonatomic) AWEUGPendantModel pendantModel;
@property (nonatomic) NSDictionary dictionaryValue;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setActivityInfo:;
- (void)setPendantModel:;
- (id)pendantModel;
- (id)activityConfig;
- (void)setActivityConfig:;
- (void).cxx_destruct;
- (id)activityInfo;
+ (id)JSONKeyPathsByPropertyKey;
@end
