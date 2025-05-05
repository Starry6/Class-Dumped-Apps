@interface ISDeviceInfo : NSObject
@property (nonatomic) NSInteger screenClass;
@property (nonatomic) NSInteger deviceClass;
@property (nonatomic) double screenScale;
@property (nonatomic) {CGSize=dd} homeScreenIconSize;
@property (nonatomic) {CGSize=dd} largeHomeScreenIconSize;
@property (nonatomic) {CGSize=dd} messagesLauncherIconSize;
@property (nonatomic) Q ideom;
@property (nonatomic) Q deviceSubtype;
- (int)deviceClass;
- (double)screenScale;
- (id)init;
- (unsigned long long)ideom;
- (id)largeHomeScreenIconSize;
- (int)screenClass;
- (id)homeScreenIconSize;
- (unsigned long long)deviceSubtype;
- (id)messagesLauncherIconSize;
+ (id)sharedInstance;
@end
