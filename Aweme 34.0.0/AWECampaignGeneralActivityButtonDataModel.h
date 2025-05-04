@interface AWECampaignGeneralActivityButtonDataModel : MTLModel
@property (nonatomic) double startTime;
@property (nonatomic) double endTime;
@property (nonatomic) NSArray multiBtn;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)multiBtn;
- (void)setMultiBtn:;
- (void)setStartTime:;
- (double)endTime;
- (void)setEndTime:;
- (void).cxx_destruct;
- (double)startTime;
+ (id)multiBtnJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
