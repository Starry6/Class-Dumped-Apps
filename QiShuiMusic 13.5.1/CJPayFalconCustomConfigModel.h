@interface CJPayFalconCustomConfigModel : JSONModel
@property (nonatomic) BOOL enableCustomConfig;
@property (nonatomic) BOOL interceptHtml;
@property (nonatomic) NSString channel;
@property (nonatomic) NSArray hostList;
@property (nonatomic) NSString assetPath;
@property (nonatomic) NSArray<CJPayFalconHtmlConfigModel> htmlFileList;
- (BOOL)enableCustomConfig;
- (id)hostList;
- (id)htmlFileList;
- (BOOL)interceptHtml;
- (void)setEnableCustomConfig:;
- (void)setHostList:;
- (void)setHtmlFileList:;
- (void)setInterceptHtml:;
- (void)setChannel:;
- (id)channel;
- (void).cxx_destruct;
- (id)assetPath;
- (void)setAssetPath:;
+ (id)keyMapper;
+ (BOOL)propertyIsOptional:;
@end
