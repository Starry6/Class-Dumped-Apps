@interface BFAppLinkTarget : NSObject
@property (nonatomic) NSURL URL;
@property (nonatomic) NSString appStoreId;
@property (nonatomic) NSString appName;
- (id)appStoreId;
- (void)setAppStoreId:;
- (void)setAppName:;
- (id)appName;
- (void).cxx_destruct;
- (void)setURL:;
- (id)URL;
+ (id)appLinkTargetWithURL:appStoreId:appName:;
@end
