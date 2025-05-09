@interface AWEOpenPlatformVirtualUserManager : NSObject
@property (nonatomic) AWEOpenPlatformAuthFlowManager flowManager;
@property (nonatomic) BDImageXUploaderClient clientTop;
@property (nonatomic) @? updateAvatarCompletion;
@property (nonatomic) q maxUserInfoCount;
@property (nonatomic) NSDictionary imageXtoken;
@property (nonatomic) NSMutableArray userAuthInfoList;
@property (nonatomic) NSString lastSaveIdentity;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)imageXUpload:fileIndex:singleImage:error:;
- (void)imageXUpload:fileIndex:progressDidUpdate:;
- (void)imageXUploadDidFinish:;
- (long long)imageXUploadGetNetState:;
- (void)imageXUpload:onLogInfo:;
- (BOOL)isPrivateAccount;
- (void)trackerEditClick:;
- (void)updateAvatar:WithCompletion:;
- (void)setLastSaveIdentity:;
- (void)saveVirtualUserInfo:WithCompletion:;
- (void)getRandomVirtualUserInfoWithCompletion:;
- (id)getVirtualUserTrackerParams;
- (BOOL)isOpenExperiment;
- (void)reportIdentityWithCompletion:;
- (id)userAuthInfoList;
- (void)updateNewestUserAuthInfoListWithCompletion:;
- (BOOL)shouldShowAddNewVirtualInfoEntrance;
- (void)updateGrantedItem:;
- (void)removeVirtualUserInfo:WithCompletion:;
- (id)getClickTypeString:;
- (void)setMaxUserInfoCount:;
- (id)lastSaveIdentity;
- (void)setClientTop:;
- (id)imageXtoken;
- (void)setUpdateAvatarCompletion:;
- (void)updateUserInfoDataFromOpenData:;
- (void)updateGrantedItemWithIdentityID:;
- (long long)maxUserInfoCount;
- (void)setImageXtoken:;
- (void)requestImageTokenWithCompletion:;
- (id)generateUserInfoListFromOpenData:;
- (void)setUserAuthInfoList:;
- (id)updateAvatarCompletion;
- (void)updateImageToken;
- (void).cxx_destruct;
- (void)setFlowManager:;
- (id)flowManager;
- (id)clientTop;
- (id)initWithFlowManager:;
+ (id)shareManager;
@end
