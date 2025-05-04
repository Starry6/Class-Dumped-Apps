@interface AWESettingsModuleConfig : HTSService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (BOOL)openRepost;
+ (BOOL)generalSearchWaterfallLayoutEnabled;
+ (BOOL)enablePrivateAccount;
+ (BOOL)forbidDownloadLocal;
+ (BOOL)enableTrending;
@end
