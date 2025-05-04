@interface AWEIMSkylightLaunchStorage : NSObject
@property (nonatomic) NSDictionary diskSectionData;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didFinishLogoutWithUid:;
- (id)diskSectionData;
- (void)setDiskSectionData:;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)reset;
+ (id)constructDiskSectionData;
+ (void)storageDataFromSectionData:;
+ (BOOL)enableBizModelInFriendModels;
+ (id)p_friendStorageKey;
+ (id)p_constructDiskSectionData;
+ (id)sharedInstance;
@end
