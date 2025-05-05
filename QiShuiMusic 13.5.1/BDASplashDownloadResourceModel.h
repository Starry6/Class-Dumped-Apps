@interface BDASplashDownloadResourceModel : NSObject
@property (nonatomic) q type;
@property (nonatomic) NSArray urlArray;
@property (nonatomic) NSString key;
@property (nonatomic) double expiresTime;
@property (nonatomic) BOOL netAllow;
- (void)setExpiresTime:;
- (double)expiresTime;
- (id)getImageUrlArrayWithUrlList:;
- (id)getVideoUrlArrayWithUrlList:;
- (id)initWithBinaryInfo:;
- (id)initWithImageInfo:;
- (id)initWithOriginalImageInfo:;
- (id)initWithVideoInfo:;
- (BOOL)netAllow;
- (void)setNetAllow:;
- (void)setUrlArray:;
- (id)urlArray;
- (id)key;
- (void)setType:;
- (void)setKey:;
- (long long)type;
- (void).cxx_destruct;
@end
