@interface AWEDCFeedPlaceholderPreloadPayload : NSObject
@property (nonatomic) NSString businessID;
@property (nonatomic) q cacheCount;
@property (nonatomic) BOOL cacheDistinguishUser;
@property (nonatomic) BOOL cacheWhenNotLogin;
@property (nonatomic) q diskSizeLimit;
- (void)setCacheCount:;
- (void)setCacheDistinguishUser:;
- (void)setDiskSizeLimit:;
- (long long)cacheCount;
- (long long)diskSizeLimit;
- (BOOL)cacheDistinguishUser;
- (BOOL)cacheWhenNotLogin;
- (void)setCacheWhenNotLogin:;
- (id)init;
- (id)businessID;
- (void)setBusinessID:;
- (void).cxx_destruct;
@end
