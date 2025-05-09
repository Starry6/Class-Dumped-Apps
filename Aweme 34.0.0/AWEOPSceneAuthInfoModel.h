@interface AWEOPSceneAuthInfoModel : MTLModel
@property (nonatomic) NSString authID;
@property (nonatomic) NSString clientKey;
@property (nonatomic) @? completeBlock;
@property (nonatomic) UIViewController targetViewController;
@property (nonatomic) NSString openExtraStr;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) NSArray scopesArray;
@property (nonatomic) BOOL passCert;
@property (nonatomic) NSString schemaOrNativeKey;
@property (nonatomic) NSString containerType;
@property (nonatomic) Q certType;
- (void)setTargetViewController:;
- (void)setCompleteBlock:;
- (id)completeBlock;
- (void)setOpenExtraStr:;
- (id)openExtraStr;
- (void)setScopesArray:;
- (void)setPassCert:;
- (void)setSchemaOrNativeKey:;
- (id)scopesArray;
- (BOOL)passCert;
- (id)schemaOrNativeKey;
- (id)clientKey;
- (void)setClientKey:;
- (void).cxx_destruct;
- (id)containerType;
- (void)setContainerType:;
- (id)targetViewController;
- (id)authID;
- (void)setAuthID:;
- (unsigned long long)certType;
- (void)setCertType:;
+ (id)JSONKeyPathsByPropertyKey;
@end
