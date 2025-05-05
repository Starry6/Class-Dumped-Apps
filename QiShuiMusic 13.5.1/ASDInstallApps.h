@interface ASDInstallApps : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (id)interface;
+ (void)installApp:onPairedDevice:withCompletionHandler:;
+ (void)installApps:withCompletionHandler:;
+ (BOOL)initialContentDownloadsEnabled;
+ (void)installApp:withCompletionHandler:;
+ (void)setInitialContentDownloadsEnabled:;
+ (void)installApps:onPairedDevice:withCompletionHandler:;
@end
