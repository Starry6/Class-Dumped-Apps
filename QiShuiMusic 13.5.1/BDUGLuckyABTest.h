@interface BDUGLuckyABTest : NSObject
@property (nonatomic) NSDictionary abTestSettings;
- (id)abTestSettings;
- (BOOL)isNewContainerWithUrlPath:;
- (BOOL)isNewContainerWithUrlPath:forceNew:;
- (void)setAbTestSettings:;
+ (id)sharedInstance;
@end
