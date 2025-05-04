@interface AWEBDABTestManager : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didFinishLogin;
- (void)didFinishLogoutWithUid:;
- (id)getCurrentUserKey;
- (id)init;
- (void)dealloc;
+ (void)_aweLazyRegisterLoad;
+ (void)doOriginalActions;
+ (id)settingsRequestPath;
+ (void)updateSettingsWithDictionary:;
+ (id)settingsRequestParamsDictionary;
+ (void)fetchABDataWithContext:;
+ (void)doOriginalActionsWithContext:;
+ (void)subscribeAWEUserMessage;
+ (void)fetchABData;
@end
