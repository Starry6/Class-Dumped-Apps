@interface AWEIMBridgeLeagueDownloadFile : BDXBridgeMethod
- (Class)paramModelClass;
- (void)callWithParamModel:completionHandler:;
- (Class)resultModelClass;
- (BOOL)checkBridgeParamsError:;
- (long long)authType;
- (id)methodName;
@end
