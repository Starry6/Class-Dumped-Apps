@interface AWEStudioRepoLocalLifeMissionModel : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) NSString lifeTaskId;
@property (nonatomic) q lifeTaskType;
@property (nonatomic) NSString lifeTaskOrderId;
@property (nonatomic) NSString lifeTaskExtra;
@property (nonatomic) NSString lifeTaskName;
@property (nonatomic) NSDictionary lifeTrackDict;
@property (nonatomic) NSDictionary taskOriginInfo;
@property (nonatomic) BOOL hasManualChangeTask;
- (id)taskOriginInfo;
- (void)setTaskOriginInfo:;
- (id)acc_publishRequestParams:;
- (id)initWithDraft:;
- (void)saveWithDraft:;
- (id)lifeTaskId;
- (void)setLifeTaskId:;
- (id)lifeTaskName;
- (void)setLifeTaskName:;
- (long long)lifeTaskType;
- (void)setLifeTaskType:;
- (id)lifeTaskExtra;
- (void)setLifeTaskExtra:;
- (id)lifeTaskOrderId;
- (void)setLifeTaskOrderId:;
- (id)lifeTrackDict;
- (void)setLifeTrackDict:;
- (BOOL)hasManualChangeTask;
- (void)setHasManualChangeTask:;
- (id)acc_publishTrackEventParams:;
- (void).cxx_destruct;
- (id)copyWithZone:;
@end
