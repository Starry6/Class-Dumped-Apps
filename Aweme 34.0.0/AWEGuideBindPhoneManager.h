@interface AWEGuideBindPhoneManager : NSObject
@property (nonatomic) NSString kAWERequestKey;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didFinishLogin;
- (void)shouldShowDialog:completionBlock:;
- (BOOL)needCheckBindStatus;
- (double)timeInterval:;
- (BOOL)needBindPhone;
- (id)guideBindPhoneSettings;
- (void)setKAWERequestKey:;
- (id)kAWERequestKey;
- (BOOL)needForceBind;
- (void)showBindPhoneAlertDialog;
- (BOOL)shouldShowDialog:;
- (void)showDialogWithType:;
- (void)trackGuideToBindPhoneNumberPopUp:alertType:;
- (id)keyWithUid:;
- (BOOL)satisfyCommonConditions;
- (BOOL)frequencySatisfied:;
- (double)timeIntervalWithKey:;
- (void)setUpUserFilter;
- (void)dealloc;
- (long long)integerValueForKey:;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
