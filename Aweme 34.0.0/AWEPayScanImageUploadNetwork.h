@interface AWEPayScanImageUploadNetwork : CJPayBaseRequest
+ (void)fetchUploadTokenWith:completion:;
+ (void)reportImageUploadResult:payInfoStr:completion:;
+ (id)buildUrl:;
@end
