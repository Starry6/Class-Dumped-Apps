@interface AWERepoPrivacyContext : NSObject
@property (nonatomic) q privacyPermissionType;
@property (nonatomic) NSString channel;
@property (nonatomic) NSArray userIDs;
@property (nonatomic) NSString createId;
@property (nonatomic) BOOL isStoryPublish;
- (id)createId;
- (void)setPrivacyPermissionType:;
- (long long)privacyPermissionType;
- (void)setUserIDs:;
- (void)setCreateId:;
- (void)setIsStoryPublish:;
- (BOOL)isStoryPublish;
- (id)channel;
- (void)setChannel:;
- (void).cxx_destruct;
- (id)userIDs;
@end
