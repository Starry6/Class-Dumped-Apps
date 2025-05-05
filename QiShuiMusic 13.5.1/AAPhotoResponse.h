@interface AAPhotoResponse : AAResponse
@property (nonatomic) NSData photoData;
@property (nonatomic) NSValue cropRect;
@property (nonatomic) NSString serverCacheTag;
- (id)cropRect;
- (id)photoData;
- (id)initWithHTTPResponse:data:;
- (id)serverCacheTag;
- (void).cxx_destruct;
@end
