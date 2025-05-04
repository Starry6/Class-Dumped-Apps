@interface AWELynxModule : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)onAppDidBecomeActive;
- (void)onAppDidEnterBackground;
+ (void)setupBulletSettings;
+ (id)localizedStringKeyForKey:;
+ (void)setup;
@end
