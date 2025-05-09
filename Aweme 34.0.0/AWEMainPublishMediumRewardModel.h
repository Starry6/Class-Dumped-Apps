@interface AWEMainPublishMediumRewardModel : NSObject
@property (nonatomic) UIImage coverImage;
@property (nonatomic) NSString coverImagePath;
@property (nonatomic) NSString videoTitle;
@property (nonatomic) BOOL isClaimOrigin;
@property (nonatomic) BOOL isExclusive;
@property (nonatomic) BOOL isSyncMediumReward;
@property (nonatomic) BOOL hasEditCover;
@property (nonatomic) BOOL hasEditTitle;
@property (nonatomic) NSString mainMediumRewardCoverResourceId;
@property (nonatomic) Q mediumVideoPlanUserStatus;
@property (nonatomic) <ACCPublishRepository> repoDeprecated;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setCoverImage:;
- (id)videoTitle;
- (void)setVideoTitle:;
- (id)repoDeprecated;
- (void)setRepoDeprecated:;
- (id)acc_publishRequestParams:;
- (id)initWithDraft:;
- (void)saveWithDraft:;
- (BOOL)isClaimOrigin;
- (void)setIsClaimOrigin:;
- (BOOL)isSyncMediumReward;
- (void)setIsSyncMediumReward:;
- (BOOL)hasEditCover;
- (void)setHasEditCover:;
- (BOOL)hasEditTitle;
- (void)setHasEditTitle:;
- (id)curContentMD5Hash;
- (id)trackInfoDicWith:;
- (id)mainMediumRewardCoverResourceId;
- (void)setMainMediumRewardCoverResourceId:;
- (unsigned long long)mediumVideoPlanUserStatus;
- (void)setMediumVideoPlanUserStatus:;
- (BOOL)isExclusive;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)coverImage;
- (void)setIsExclusive:;
- (id)coverImagePath;
- (void)setCoverImagePath:;
@end
