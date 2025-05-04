@interface AWEPOIHeadVideoCardModel : AWEBaseApiModel
@property (nonatomic) BOOL hasVideo;
@property (nonatomic) q userCnt;
@property (nonatomic) NSString entryDesc;
@property (nonatomic) NSArray avatarIconList;
- (long long)userCnt;
- (void)setUserCnt:;
- (id)entryDesc;
- (void)setEntryDesc:;
- (id)avatarIconList;
- (void)setAvatarIconList:;
- (BOOL)hasVideo;
- (void).cxx_destruct;
- (void)setHasVideo:;
+ (id)JSONKeyPathsByPropertyKey;
@end
