@interface UgenEnv : NSObject
@property (nonatomic) @ context;
@property (nonatomic) NSString appId;
@property (nonatomic) BOOL enableDebugLog;
@property (nonatomic) NSDictionary iconSrcMapping;
@property (nonatomic) NSMutableDictionary imageSrcMapping;
@property (nonatomic) # customImageViewClass;
@property (nonatomic) UGWidgetRegister widgetRegister;
@property (nonatomic) UgenAdapterRegister adapterRegister;
- (id)adapterRegister;
- (id)imageSrcMapping;
- (Class)customImageViewClass;
- (BOOL)enableDebugLog;
- (id)iconSrcMapping;
- (void)registerBehaviorBundle:;
- (void)registerCustomImageViewClass:;
- (void)registerIconSrcMapping:;
- (void)registerImageSrcMapping:;
- (void)setCustomImageViewClass:;
- (void)setEnableDebugLog:;
- (void)setIconSrcMapping:;
- (void)setImageSrcMapping:;
- (id)widgetRegister;
- (id)init;
- (id)appId;
- (id)context;
- (void)setAppId:;
- (void).cxx_destruct;
- (void)setContext:;
+ (id)sharedInstance;
@end
