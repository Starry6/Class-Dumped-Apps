@interface AAMyPhotoRequest : AARequest
@property (nonatomic) NSString serverCacheTag;
@property (nonatomic) ACAccount iTunesAccount;
- (id)urlString;
- (id)iTunesAccount;
- (void)setiTunesAccount:;
- (void)setServerCacheTag:;
- (id)urlRequest;
- (id)serverCacheTag;
- (void).cxx_destruct;
- (id)initWithAccount:;
+ (Class)responseClass;
@end
