@interface AWEIMMediaViewConfigModel : NSObject
@property (nonatomic) q type;
@property (nonatomic) {CGSize=dd} coverSize;
@property (nonatomic) AWEURLModel coverURL;
@property (nonatomic) <AWEIMEncryptCoverResourceProtocol> coverResource;
- (id)coverSize;
- (void)setCoverSize:;
- (id)coverResource;
- (void)setCoverResource:;
- (long long)type;
- (void)setType:;
- (void).cxx_destruct;
- (id)coverURL;
- (void)setCoverURL:;
@end
