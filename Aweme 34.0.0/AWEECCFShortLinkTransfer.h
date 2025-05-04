@interface AWEECCFShortLinkTransfer : NSObject
+ (id)cf_handleDistributionUrl:urlType:routerParams:;
+ (void)cf_distributionABTest:token:type:completion:;
+ (void)cf_distributionReport:completion:;
+ (void)transformCFShortLink:completion:;
@end
