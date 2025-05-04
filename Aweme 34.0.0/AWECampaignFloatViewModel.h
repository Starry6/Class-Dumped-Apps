@interface AWECampaignFloatViewModel : MTLModel
@property (nonatomic) AWECampaignCapsuleModel capsuleConfig;
@property (nonatomic) NSString textColor;
@property (nonatomic) NSString iconURL;
@property (nonatomic) AWECampaignRunningTimerModel runningTimerModel;
@property (nonatomic) AWECampaignFinishedTimerModel finishedTimerModel;
@property (nonatomic) BOOL dismissWithoutFBSchema;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)runningTimerModel;
- (id)finishedTimerModel;
- (id)capsuleConfig;
- (void)setCapsuleConfig:;
- (void)setRunningTimerModel:;
- (void)setFinishedTimerModel:;
- (BOOL)dismissWithoutFBSchema;
- (void)setDismissWithoutFBSchema:;
- (void)setIconURL:;
- (id)iconURL;
- (void)setTextColor:;
- (void).cxx_destruct;
- (id)textColor;
+ (id)JSONTransformerForKey:;
+ (id)JSONKeyPathsByPropertyKey;
@end
