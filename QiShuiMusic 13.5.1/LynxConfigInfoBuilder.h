@interface LynxConfigInfoBuilder : NSObject
@property (nonatomic) NSString pageVersion;
@property (nonatomic) NSString pageType;
@property (nonatomic) NSString cliVersion;
@property (nonatomic) NSString customData;
@property (nonatomic) NSString templateUrl;
@property (nonatomic) NSString targetSdkVersion;
@property (nonatomic) NSString lepusVersion;
@property (nonatomic) q threadStrategyForRendering;
@property (nonatomic) BOOL enableLepusNG;
@property (nonatomic) BOOL enableCanvas;
@property (nonatomic) NSString radonMode;
@property (nonatomic) NSSet registeredComponent;
@property (nonatomic) BOOL cssAlignWithLegacyW3c;
@property (nonatomic) BOOL enableCSSParser;
@property (nonatomic) NSString reactVersion;
- (BOOL)enableCSSParser;
- (void)setPageVersion:;
- (id)cliVersion;
- (BOOL)cssAlignWithLegacyW3c;
- (BOOL)enableCanvas;
- (BOOL)enableLepusNG;
- (id)lepusVersion;
- (id)pageVersion;
- (id)radonMode;
- (id)reactVersion;
- (id)registeredComponent;
- (void)setCliVersion:;
- (void)setCssAlignWithLegacyW3c:;
- (void)setEnableCSSParser:;
- (void)setEnableCanvas:;
- (void)setEnableLepusNG:;
- (void)setLepusVersion:;
- (void)setRadonMode:;
- (void)setReactVersion:;
- (void)setRegisteredComponent:;
- (void)setTargetSdkVersion:;
- (void)setThreadStrategyForRendering:;
- (id)targetSdkVersion;
- (long long)threadStrategyForRendering;
- (id)init;
- (id)build;
- (void).cxx_destruct;
- (void)setPageType:;
- (id)pageType;
- (id)customData;
- (void)setCustomData:;
- (id)templateUrl;
- (void)setTemplateUrl:;
@end
