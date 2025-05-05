@interface IESForestTTNetTrackInfo : NSObject
@property (nonatomic) BOOL isNetworkAccessed;
@property (nonatomic) BOOL isCached;
@property (nonatomic) NSDictionary debugInfo;
- (id)getUTCFormateDate:;
- (id)initWithTTResponse:;
- (BOOL)isNetworkAccessed;
- (void)setIsNetworkAccessed:;
- (id)debugInfo;
- (void).cxx_destruct;
- (BOOL)isCached;
- (void)setIsCached:;
- (void)setDebugInfo:;
+ (id)trackResponseHeaders;
@end
