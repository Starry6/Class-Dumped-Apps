@interface AWEIMSettingManager : NSObject
@property (nonatomic) AWEIMSettingModel model;
@property (nonatomic) BOOL lastFetchSuccess;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)changeChatPrivacy:withURL:completion:;
- (void)clearIMSettingWhenLogout;
- (void)fetchIMSettingWithCompletion:;
- (void)fetchIMSettingWithRetry:context:completion:;
- (BOOL)lastFetchSuccess;
- (void)saveCurrentModel;
- (void)setLastFetchSuccess:;
- (id)model;
- (id)init;
- (void)setModel:;
- (void).cxx_destruct;
+ (void)doOriginalActions;
+ (id)settingsRequestPath;
+ (void)updateSettingsWithDictionary:;
+ (id)sharedInstance;
@end
