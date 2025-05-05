@interface IESECWebImageUrlCache : NSObject
@property (nonatomic) YYMemoryCache cache;
@property (nonatomic) YYMemoryCache previewCache;
@property (nonatomic) YYMemoryCache requestFlag;
- (BOOL)didRequestUrl:;
- (id)previewUrlForKey:;
- (id)remakeUrlForKey:;
- (void)setPreviewCache:;
- (void)setPreviewUrl:forKey:;
- (void)setRemakeUrl:forKey:;
- (void)setRequestUrlFlag:;
- (void)setCache:;
- (void).cxx_destruct;
- (id)cache;
- (id)previewCache;
- (id)requestFlag;
- (void)setRequestFlag:;
+ (id)sharedInstance;
@end
