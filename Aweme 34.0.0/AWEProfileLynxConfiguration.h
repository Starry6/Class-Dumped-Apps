@interface AWEProfileLynxConfiguration : NSObject
@property (nonatomic) BOOL fromHome;
@property (nonatomic) NSDictionary queryDict;
@property (nonatomic) NSDictionary globalProps;
@property (nonatomic) NSString tabName;
@property (nonatomic) NSDictionary commonTrackDict;
@property (nonatomic) NSString scheme;
@property (nonatomic) NSString referString;
@property (nonatomic) NSDictionary profileNewSchemaDict;
@property (nonatomic) UIColor defaultProfileLynxBgColor;
@property (nonatomic) NSString serverMobParams;
@property (nonatomic) NSNumber tabId;
@property (nonatomic) NSString businessType;
@property (nonatomic) AWEProfileContext profileContext;
@property (nonatomic) <AWEProfileBaseContainerProtocol> profileContainer;
- (id)referString;
- (void)setReferString:;
- (id)globalProps;
- (void)setGlobalProps:;
- (void)setBusinessType:;
- (void)setCommonTrackDict:;
- (id)queryDict;
- (void)setQueryDict:;
- (BOOL)fromHome;
- (void)setFromHome:;
- (id)commonTrackDict;
- (id)profileContext;
- (id)serverMobParams;
- (void)setServerMobParams:;
- (void)setProfileContext:;
- (void)setProfileContainer:;
- (void)setDefaultProfileLynxBgColor:;
- (void)setProfileNewSchemaDict:;
- (BOOL)enableLynxTabV3Optimize;
- (id)profileNewSchemaDict;
- (id)defaultProfileLynxBgColor;
- (id)profileContainer;
- (id)scheme;
- (void)setScheme:;
- (id)businessType;
- (void).cxx_destruct;
- (id)tabName;
- (void)setTabName:;
- (void)setTabId:;
- (id)tabId;
@end
