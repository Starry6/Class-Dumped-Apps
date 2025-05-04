@interface AWEFeedBSServerPortraitParser : NSObject
@property (nonatomic) NSDictionary portraits;
@property (nonatomic) NSDictionary params;
@property (nonatomic) NSLock safeLock;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setPortraits:;
- (id)getPortrait;
- (void)setSafeLock:;
- (id)safeLock;
- (void)parseServerPortrait;
- (id)init;
- (void).cxx_destruct;
- (id)params;
- (id)mutableCopyWithZone:;
- (id)copyWithZone:;
- (void)setParams:;
+ (void)_aweLazyRegisterLoad;
+ (id)processSolariaServerPortraits:;
+ (void)doOriginalActions;
+ (id)settingsRequestPath;
+ (void)updateSettingsWithDictionary:;
+ (id)settingsRequestParamsDictionary;
+ (id)sharedInstance;
+ (id)allocWithZone:;
@end
