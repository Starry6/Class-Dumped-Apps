@interface IESECCommentAppendModel : MTLModel
@property (nonatomic) NSString commentTime;
@property (nonatomic) NSString content;
@property (nonatomic) NSArray appendPhotos;
@property (nonatomic) NSArray appendVideos;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setCommentTime:;
- (id)appendPhotos;
- (id)appendVideos;
- (id)commentTime;
- (void)setAppendPhotos:;
- (void)setAppendVideos:;
- (id)content;
- (void)setContent:;
- (id)init;
- (void).cxx_destruct;
+ (id)appendPhotosJSONTransformer;
+ (id)appendVideosJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
