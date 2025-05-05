@interface IESECListKitLottieResourceManager : NSObject
@property (nonatomic) YYMemoryCache memoryCache;
- (int)startDownloadWithURL:progress:result:;
- (id)init;
- (id)memoryCache;
- (void).cxx_destruct;
+ (void)cleanLottieResourceIfNeeded;
@end
