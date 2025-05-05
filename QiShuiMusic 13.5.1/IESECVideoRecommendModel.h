@interface IESECVideoRecommendModel : MTLModel
@property (nonatomic) NSString videoID;
@property (nonatomic) NSString itemID;
@property (nonatomic) NSNumber videoDuration;
@property (nonatomic) IESECURLModel coverImage;
@property (nonatomic) IESECURLModel videoURL;
@property (nonatomic) NSString link;
@property (nonatomic) NSString linkWithProduct;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)linkWithProduct;
- (void)setCoverImage:;
- (void)setLinkWithProduct:;
- (id)link;
- (id)videoURL;
- (void)setLink:;
- (id)itemID;
- (void)setItemID:;
- (id)videoDuration;
- (void)setVideoURL:;
- (void).cxx_destruct;
- (void)setVideoDuration:;
- (id)videoID;
- (void)setVideoID:;
- (id)coverImage;
+ (id)JSONKeyPathsByPropertyKey;
@end
