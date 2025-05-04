@interface AWEPayNFCUtils : NSObject
+ (void)removeSecondPageAndLoadingAfterDelay:;
+ (void)removeSecondPageAndLoading;
+ (id)urlString:addQueryDict:;
+ (void)removeSecondPage;
+ (void)removeNFCLoading;
@end
