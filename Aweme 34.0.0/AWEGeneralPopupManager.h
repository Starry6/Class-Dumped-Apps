@interface AWEGeneralPopupManager : NSObject
@property (nonatomic) NSMutableDictionary descriptorDictionary;
@property (nonatomic) NSString lastUserID;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)task:willAppendWithInfo:;
- (void)setLastUserID:;
- (id)lastUserID;
- (void)presentPopupsAtTiming:onClose:;
- (void)persistLocalDescriptorsForUserID:;
- (void)preparePopupsWithCompletion:;
- (void)registerPopupPresenter;
- (void)loadLocalDescriptorsForUserID:;
- (void)updateDescriptorsWithPopups:;
- (void)requestPopupsWithCompletion:;
- (id)descriptorDictionary;
- (id)descriptorForID:;
- (id)localDescriptorsKeyForUserID:;
- (void)showPopupIfNeedWithTask:;
- (void)registerPopupPresenter:forID:;
- (void)showPopupAtTiming:enableAlways:;
- (id)init;
- (void).cxx_destruct;
+ (id)sharedManager;
@end
