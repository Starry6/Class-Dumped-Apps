@interface AWEStudioFollowShotTrackerContext : HTSService
@property (nonatomic) AWEStudioFollowShootModel flowShotModel;
@property (nonatomic) NSString currentAwemeIdentifier;
@property (nonatomic) NSString lastPlayGid;
@property (nonatomic) NSString lastpagePlayAuthorId;
@property (nonatomic) NSString lastpagePlayHashtagNames;
@property (nonatomic) NSString lastpagePlayMusicId;
@property (nonatomic) NSString lastpagePlayPropIds;
@property (nonatomic) NSString lastPagePlayGid;
@property (nonatomic) NSString lastPageName;
@property (nonatomic) NSString prePageName;
@property (nonatomic) NSString prePagePlayGid;
@property (nonatomic) NSString rootGid;
@property (nonatomic) NSDictionary backUpCoreMobDict;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)lastPlayGid;
- (void)setLastPlayGid:;
- (id)rootGid;
- (void)setRootGid:;
- (id)lastpagePlayAuthorId;
- (void)setLastpagePlayAuthorId:;
- (id)lastpagePlayHashtagNames;
- (void)setLastpagePlayHashtagNames:;
- (id)lastpagePlayMusicId;
- (void)setLastpagePlayMusicId:;
- (id)lastpagePlayPropIds;
- (void)setLastpagePlayPropIds:;
- (void)assembleRecommendCoreMobWithCreationId:;
- (id)recommendCoreMobMap;
- (BOOL)ignoreCurrentPathWithParams:;
- (id)lastPagePlayGid;
- (id)lastPageName;
- (id)prePagePlayGid;
- (id)prePageName;
- (void)feedTableViewDidAppear:;
- (void)setLastPageName:;
- (void)setLastPagePlayGid:;
- (void)setPrePageName:;
- (void)setPrePagePlayGid:;
- (void)saveRecommendCoreMob:creationId:;
- (void)parsePlayTimeParamsWithEnterFrom:awemeModel:;
- (void)setBackUpCoreMobDict:;
- (id)flowShotModel;
- (id)backUpCoreMobDict;
- (id)currentAwemeIdentifier;
- (void)setCurrentAwemeIdentifier:;
- (BOOL)currentIsConsumptionPageWithEnterFrom:;
- (BOOL)isSameConsumptionPageWithSourcePage:targetEnterFrom:;
- (void)matchTrackWithEvent:params:;
- (BOOL)parameterIsEqualWithTarget:source:;
- (void)setFlowShotModel:;
- (id)init;
- (void).cxx_destruct;
+ (void)showTrackMatchFailed;
+ (id)shotTrackerAspect;
+ (id)defaultManager;
@end
