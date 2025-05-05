@interface CJPayWebViewCommonConfigModel : JSONModel
@property (nonatomic) NSArray intergratedHostReplaceBlockList;
@property (nonatomic) BOOL useIESAuthManager;
@property (nonatomic) BOOL offlineUseSchemeHandler;
@property (nonatomic) NSArray offlineExcludeUrlList;
@property (nonatomic) q showErrorViewTimeout;
@property (nonatomic) NSArray showErrorViewDomainList;
- (id)intergratedHostReplaceBlockList;
- (id)offlineExcludeUrlList;
- (BOOL)offlineUseSchemeHandler;
- (void)setIntergratedHostReplaceBlockList:;
- (void)setOfflineExcludeUrlList:;
- (void)setOfflineUseSchemeHandler:;
- (void)setShowErrorViewDomainList:;
- (void)setShowErrorViewTimeout:;
- (void)setUseIESAuthManager:;
- (id)showErrorViewDomainList;
- (long long)showErrorViewTimeout;
- (BOOL)useIESAuthManager;
- (void).cxx_destruct;
+ (id)keyMapper;
+ (BOOL)propertyIsOptional:;
@end
