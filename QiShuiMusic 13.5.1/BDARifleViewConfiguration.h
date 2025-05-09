@interface BDARifleViewConfiguration : NSObject
@property (nonatomic) NSArray customLynxMethods;
@property (nonatomic) NSString bid;
@property (nonatomic) NSString accessKey;
@property (nonatomic) @ globalProps;
@property (nonatomic) NSData templateData;
@property (nonatomic) NSArray extraJSPaths;
@property (nonatomic) NSDictionary initialData;
@property (nonatomic) NSDictionary customQueryItems;
@property (nonatomic) q widthMode;
@property (nonatomic) q heightMode;
@property (nonatomic) BOOL needUpdateScreenSize;
@property (nonatomic) BOOL disableAutoExpose;
@property (nonatomic) BDARifleAdInfoParams adInfo;
@property (nonatomic) NSArray customInstanceMethods;
@property (nonatomic) NSArray disableInnerMethodNames;
@property (nonatomic) NSArray customUIElements;
@property (nonatomic) double fontScale;
@property (nonatomic) BOOL enableCanvas;
@property (nonatomic) <BDARifleCreateLynxKitParamsProtocol> paramsDelegate;
@property (nonatomic) q jsRuntimeState;
@property (nonatomic) NSNumber useTemplateBundle;
@property (nonatomic) BOOL enableReuse;
- (void)setBid:;
- (void)setGlobalProps:;
- (void)setInitialData:;
- (id)bid;
- (void)setEnableReuse:;
- (id)adInfo;
- (id)customInstanceMethods;
- (id)customLynxMethods;
- (id)customQueryItems;
- (id)customUIElements;
- (BOOL)disableAutoExpose;
- (id)disableInnerMethodNames;
- (BOOL)enableCanvas;
- (BOOL)enableReuse;
- (id)extraJSPaths;
- (id)generateLynxKitParamsWithSchemaModel:context:;
- (id)globalProps;
- (long long)heightMode;
- (id)initialData;
- (long long)jsRuntimeState;
- (BOOL)needUpdateScreenSize;
- (id)paramsDelegate;
- (void)setAdInfo:;
- (void)setCustomInstanceMethods:;
- (void)setCustomLynxMethods:;
- (void)setCustomQueryItems:;
- (void)setCustomUIElements:;
- (void)setDisableAutoExpose:;
- (void)setDisableInnerMethodNames:;
- (void)setEnableCanvas:;
- (void)setExtraJSPaths:;
- (void)setHeightMode:;
- (void)setJsRuntimeState:;
- (void)setNeedUpdateScreenSize:;
- (void)setParamsDelegate:;
- (void)setTemplateData:;
- (void)setUseTemplateBundle:;
- (void)setWidthMode:;
- (id)templateData;
- (id)useTemplateBundle;
- (long long)widthMode;
- (void).cxx_destruct;
- (id)accessKey;
- (void)setAccessKey:;
- (double)fontScale;
- (void)setFontScale:;
@end
