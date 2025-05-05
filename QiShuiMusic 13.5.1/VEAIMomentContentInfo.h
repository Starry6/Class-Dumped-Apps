@interface VEAIMomentContentInfo : NSObject
@property (nonatomic) NSArray tags;
@property (nonatomic) NSArray faceFeatures;
@property (nonatomic) VEAIMomentScoreInfo totalScoreInfo;
@property (nonatomic) NSArray scoreInfos;
@property (nonatomic) BOOL isPorn;
@property (nonatomic) BOOL isLeader;
@property (nonatomic) NSArray peopleIds;
@property (nonatomic) q simId;
- (BOOL)isPorn;
- (id)peopleIds;
- (id)scoreInfos;
- (void)setFaceFeatures:;
- (void)setIsPorn:;
- (void)setPeopleIds:;
- (void)setScoreInfos:;
- (void)setSimId:;
- (void)setTotalScoreInfo:;
- (long long)simId;
- (id)totalScoreInfo;
- (id)tags;
- (void)setTags:;
- (void).cxx_destruct;
- (id)faceFeatures;
- (BOOL)isLeader;
- (void)setIsLeader:;
@end
