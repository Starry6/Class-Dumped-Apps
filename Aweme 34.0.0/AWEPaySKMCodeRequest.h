@interface AWEPaySKMCodeRequest : CJPayBaseRequest
+ (void)startCheckCodeValid:completion:;
+ (id)createTaskCheckCodeValid:extraParams:completion:;
+ (id)buildUrl:;
+ (void)startCreateCodeRequest:codeType:completion:;
+ (void)startCheckCodeValid:extraParams:completion:;
+ (id)buildWithParams:codeType:;
+ (id)getCodeTypeStr:;
+ (void)startRefreshCode:completion:;
@end
