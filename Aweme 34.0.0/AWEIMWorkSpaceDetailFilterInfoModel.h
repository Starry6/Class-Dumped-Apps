@interface AWEIMWorkSpaceDetailFilterInfoModel : AWEBaseApiModel
@property (nonatomic) NSArray missionSource;
@property (nonatomic) NSArray missionStatus;
- (id)missionSource;
- (void)setMissionSource:;
- (id)missionStatus;
- (void)setMissionStatus:;
- (void).cxx_destruct;
+ (id)missionSourceJSONTransformer;
+ (id)missionStatusJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
