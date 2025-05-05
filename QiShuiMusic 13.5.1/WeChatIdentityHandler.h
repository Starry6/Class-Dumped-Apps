@interface WeChatIdentityHandler : NSObject
@property (nonatomic) BaseReq contextReq;
@property (nonatomic) NSString contextID;
@property (nonatomic) BOOL universalLinkCheckEnable;
@property (nonatomic) @? checkCompletion;
- (BOOL)checkContextID:;
- (BOOL)checkAndRecordTokenToKeychain:contextID:error:;
- (id)contextReq;
- (id)contextRequest;
- (void)setContextReq:;
- (void)setContextReq:contextId:;
- (void)setUniversalLinkCheckEnable:;
- (BOOL)universalLinkCheckEnable;
- (id)contextID;
- (void)setContextID:;
- (void).cxx_destruct;
- (void)clearContext;
- (id)checkCompletion;
- (void)setCheckCompletion:;
+ (id)genWeChatUniversalLinkWithExtraUrl:token:contextId:paramsDataStr:unnecessaryDataErased:;
+ (id)genWeChatUrlSchemeUrl:appendBundleID:isDegrade:paramsDataStr:unnecessaryDataErased:;
+ (id)loadTokenFromKeychain;
+ (id)registerAppID;
+ (void)registerAppID:universalLink:;
+ (id)registerUniversalLink;
+ (id)errorWithCode:description:;
+ (id)shareInstance;
+ (id)keychainQuery;
@end
