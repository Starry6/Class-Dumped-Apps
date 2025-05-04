@interface AWEPLVTeenAlbumModel : MTLModel
@property (nonatomic) NSString albumID;
@property (nonatomic) NSString title;
@property (nonatomic) AWEURLModel coverUrl;
@property (nonatomic) <AWEMinorAlbumStatusProtocol> status;
@property (nonatomic) q source;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setCoverUrl:;
- (id)coverUrl;
- (void)setAlbumID:;
- (void)setStatus:;
- (void).cxx_destruct;
- (long long)source;
- (id)status;
- (id)title;
- (void)setSource:;
- (void)setTitle:;
- (id)albumID;
+ (id)coverUrlJSONTransformer;
+ (id)statusJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
