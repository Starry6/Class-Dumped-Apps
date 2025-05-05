@interface UIWebClipIcon : NSObject
@property (nonatomic) BOOL precomposed;
@property (nonatomic) BOOL siteWide;
@property (nonatomic) {CGSize=dd} bestSize;
@property (nonatomic) NSURL url;
- (id)url;
- (BOOL)isPrecomposed;
- (void)setUrl:;
- (void).cxx_destruct;
- (void)setPrecomposed:;
- (long long)compare:preferringDeviceIconSizes:;
- (BOOL)isSiteWide;
- (void)setSiteWide:;
- (id)bestSize;
- (void)setBestSize:;
@end
