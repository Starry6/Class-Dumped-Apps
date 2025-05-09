@interface AWEPOIDetailPhotoBaseInfo : NSObject
@property (nonatomic) AWEURLModel thumbnailURL;
@property (nonatomic) AWEURLModel imageURL;
@property (nonatomic) NSNumber picScore;
@property (nonatomic) NSString picSource;
@property (nonatomic) q picIndex;
@property (nonatomic) q totalCount;
@property (nonatomic) q mediaType;
@property (nonatomic) UIImage watermarkImage;
@property (nonatomic) UIImage image;
@property (nonatomic) NSValue contentOffset;
@property (nonatomic) NSNumber zoomScale;
@property (nonatomic) q source;
@property (nonatomic) BOOL hasTrackShowEvent;
@property (nonatomic) {CGSize=dd} displaySize;
@property (nonatomic) @? onDisplaySizeReadyBlock;
@property (nonatomic) NSDictionary trackData;
@property (nonatomic) NSString videoId;
@property (nonatomic) NSString videoUrl;
@property (nonatomic) NSString videoCoverUri;
@property (nonatomic) NSString videoCoverUrl;
@property (nonatomic) double videoDuration;
@property (nonatomic) double videoWidth;
@property (nonatomic) double videoHeight;
@property (nonatomic) BOOL playWhenCellAppear;
- (id)videoCoverUrl;
- (void)setVideoCoverUrl:;
- (void)setWatermarkImage:;
- (id)watermarkImage;
- (BOOL)hasTrackShowEvent;
- (void)setHasTrackShowEvent:;
- (id)picSource;
- (void)setPicSource:;
- (void)setOnDisplaySizeReadyBlock:;
- (long long)picIndex;
- (void)setPicIndex:;
- (id)videoCoverUri;
- (void)setVideoCoverUri:;
- (id)picScore;
- (id)onDisplaySizeReadyBlock;
- (void)setPicScore:;
- (BOOL)playWhenCellAppear;
- (void)setPlayWhenCellAppear:;
- (void)setMediaType:;
- (id)init;
- (void)setContentOffset:;
- (id)image;
- (long long)totalCount;
- (id)contentOffset;
- (void)setImage:;
- (void)setZoomScale:;
- (void)setVideoWidth:;
- (id)zoomScale;
- (long long)mediaType;
- (id)displaySize;
- (void)setVideoHeight:;
- (id)imageURL;
- (void)setVideoId:;
- (double)videoWidth;
- (void).cxx_destruct;
- (double)videoHeight;
- (double)videoDuration;
- (long long)source;
- (void)setSource:;
- (void)setImageURL:;
- (id)videoId;
- (void)setThumbnailURL:;
- (id)thumbnailURL;
- (void)setVideoUrl:;
- (id)videoUrl;
- (id)trackData;
- (void)setVideoDuration:;
- (void)setDisplaySize:;
- (void)setTotalCount:;
- (void)setTrackData:;
@end
