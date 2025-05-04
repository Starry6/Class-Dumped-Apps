@interface AWEPrivacyOneKeyGuardManager : NSObject
@property (nonatomic) BOOL shouldShowSearchedByStranger;
@property (nonatomic) AWEOneKeyGuardModel oneKeyGuardModel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didFinishLogoutWithUid:;
- (id)oneKeyGuardModel;
- (BOOL)shouldShowSearchedByStranger;
- (void)fetchOneKeyGuardSettingWithCompletion:;
- (void)postOneKeyGuardSetting:withCompletion:;
- (void)setOneKeyGuardModel:;
- (void)setShouldShowSearchedByStranger:;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:;
- (id)copyWithZone:;
+ (id)sharedInstance;
+ (id)allocWithZone:;
@end
