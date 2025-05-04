@interface AWEPlayInteractionLikeLoginGuideManager : NSObject
@property (nonatomic) NSDictionary likeLoginConfig;
@property (nonatomic) BOOL configured;
- (id)likeLoginConfig;
- (BOOL)canShowLogin;
- (void)recordLikeLogin;
- (BOOL)halfScreenLogin;
- (void)setLikeLoginConfig:;
- (id)init;
- (void)setConfigured:;
- (BOOL)configured;
- (void).cxx_destruct;
+ (id)sharedManager;
@end
