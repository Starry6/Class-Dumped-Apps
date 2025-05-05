@interface IESLiveOpenParamModel : IESLiveBridgeModel
@property (nonatomic) NSString url;
@property (nonatomic) BOOL replace;
@property (nonatomic) NSString replaceType;
@property (nonatomic) NSDictionary initialProps;
@property (nonatomic) BOOL useSysBrowser;
@property (nonatomic) BOOL enableLandscape;
@property (nonatomic) NSString orientation;
@property (nonatomic) NSDictionary extra;
- (void)setReplaceType:;
- (BOOL)enableLandscape;
- (BOOL)replace;
- (id)initialProps;
- (id)replaceType;
- (void)setEnableLandscape:;
- (void)setExtra:;
- (void)setInitialProps:;
- (void)setReplace:;
- (void)setUseSysBrowser:;
- (BOOL)useSysBrowser;
- (id)extra;
- (id)url;
- (id)orientation;
- (void)setUrl:;
- (void).cxx_destruct;
- (void)setOrientation:;
+ (id)modelCustomPropertyMapper;
@end
