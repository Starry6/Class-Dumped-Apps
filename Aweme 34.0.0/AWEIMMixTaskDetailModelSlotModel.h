@interface AWEIMMixTaskDetailModelSlotModel : NSObject
@property (nonatomic) q userId;
@property (nonatomic) q roleType;
@property (nonatomic) NSString modelId;
@property (nonatomic) IESIMURLModel modelCover;
@property (nonatomic) q avgAge;
@property (nonatomic) NSString gender;
@property (nonatomic) q modelStatus;
- (long long)modelStatus;
- (void)setModelStatus:;
- (void)setRoleType:;
- (long long)roleType;
- (id)modelCover;
- (void)setModelCover:;
- (long long)avgAge;
- (void)setAvgAge:;
- (void)setModelId:;
- (long long)userId;
- (void)setGender:;
- (id)gender;
- (void).cxx_destruct;
- (id)modelId;
- (void)setUserId:;
@end
