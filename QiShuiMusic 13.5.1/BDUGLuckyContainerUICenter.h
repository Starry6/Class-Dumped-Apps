@interface BDUGLuckyContainerUICenter : NSObject
@property (nonatomic) # loadingClass;
@property (nonatomic) # errorClass;
@property (nonatomic) # naviClass;
- (void)__configErrorViewContext:urlString:;
- (void)__configLoadingViewContext:urlString:;
- (void)__configNavBarContext:urlString:;
- (void)configContext:urlString:;
- (Class)errorClass;
- (Class)loadingClass;
- (Class)naviClass;
- (void)registerErrorClass:;
- (void)registerLoadingClass:;
- (void)registerNaviClass:;
- (void)setErrorClass:;
- (void)setLoadingClass:;
- (void)setNaviClass:;
- (void).cxx_destruct;
+ (BOOL)needPineappleUIWithQueryItems:;
+ (id)sharedInstance;
@end
