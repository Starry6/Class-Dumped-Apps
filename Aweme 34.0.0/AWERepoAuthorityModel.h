@interface AWERepoAuthorityModel : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) Q privacyType;
@property (nonatomic) q privacyPermissionType;
@property (nonatomic) AWEVideoDraftExclusionModel exclusionModel;
@property (nonatomic) AWEVideoDraftPrivacyExtraModel<ACCRepoDraftPrivacyExtraData> privacyExtraModel;
@property (nonatomic) BOOL initCompleted;
@property (nonatomic) q itemComment;
@property (nonatomic) q itemDanmaku;
@property (nonatomic) q itemDownload;
@property (nonatomic) NSNumber itemDuet;
@property (nonatomic) NSNumber itemReact;
@property (nonatomic) AFDPrivacyPublishParamsModel lastPublishedPrivacyParamsModel;
@property (nonatomic) BOOL shouldShowGrant;
@property (nonatomic) NSNumber downloadType;
@property (nonatomic) NSNumber itemShare;
@property (nonatomic) AWERepoAuthorityContext authorityContext;
@property (nonatomic) q xiguaPrivacyType;
@property (nonatomic) BOOL isXiguaStarAtlasVideo;
@property (nonatomic) <ACCPublishRepository> repoDeprecated;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) <ACCRepoDataContext> dataContext;
@property (nonatomic) <ACCWorkspaceReader> workspaceReader;
- (BOOL)isNotPublic;
- (id)dataContext;
- (BOOL)isCloseFriends;
- (void)setItemDuet:;
- (void)setPrivacyPermissionType:;
- (long long)itemComment;
- (void)setItemComment:;
- (long long)itemDownload;
- (void)setItemDownload:;
- (id)itemDuet;
- (id)itemReact;
- (void)setItemReact:;
- (id)itemShare;
- (void)setItemShare:;
- (long long)itemDanmaku;
- (void)setItemDanmaku:;
- (long long)privacyPermissionType;
- (unsigned long long)privacyType;
- (void)setPrivacyType:;
- (BOOL)isPartOfVisible;
- (long long)xiguaPrivacyType;
- (void)setXiguaPrivacyType:;
- (BOOL)isXiguaStarAtlasVideo;
- (void)setIsXiguaStarAtlasVideo:;
- (id)repoDeprecated;
- (void)setRepoDeprecated:;
- (void)setDataContext:;
- (id)acc_publishRequestParams:;
- (id)initWithDraft:;
- (void)saveWithDraft:;
- (BOOL)isTendPublic;
- (BOOL)isTendMutualFollow;
- (id)privacyExtraModel;
- (void)updateFromAweme:;
- (void)setLastPublishedPrivacyParamsModel:;
- (id)lastPublishedPrivacyParamsModel;
- (id)exclusionModel;
- (id)authorityContext;
- (void)setPrivacyExtraModel:;
- (void)updatePrivacyType:identifier:;
- (void)updatePrivacyPermissionType:;
- (BOOL)isTendPrivate;
- (id)workspaceReader;
- (void)setWorkspaceReader:;
- (BOOL)isPublicAndDontShare;
- (void)draftWillBeSavedWithID:;
- (void)modelDidRetrievedFromDraftWithID:;
- (BOOL)isModifiedComparesToModel:;
- (id)isModifiedTrackInfoComparesToModel:;
- (void)setExclusionModel:;
- (BOOL)isOnlyPrivate;
- (id)commentPermissionTextDictEnglish;
- (long long)defaultXiguaPrivacyTypeWithIsPrivateAccount:;
- (BOOL)initCompleted;
- (void)setInitCompleted:;
- (id)acc_publishTrackEventParams:;
- (long long)getPrivacyPermissionTypeForDraftModel:;
- (void)setAuthorityContext:;
- (void)setShouldShowGrant:;
- (BOOL)shouldShowGrant;
- (id)customEidtStatusCompareParams:scene:;
- (void)checkPrivacyPermissionWithContext:beforePrivacyPermissionType:checkHandler:;
- (id)acc_publishRequestParams:needCheck:;
- (void)checkPrivacyRecordWithPublishViewModel:;
- (id)init;
- (id)downloadType;
- (void)setDownloadType:;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (BOOL)isEqualToObject:;
+ (id)descWithPrivacyType:;
+ (id)privacyTraceMap;
@end
