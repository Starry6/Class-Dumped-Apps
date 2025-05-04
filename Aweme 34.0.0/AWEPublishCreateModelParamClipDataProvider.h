@interface AWEPublishCreateModelParamClipDataProvider : NSObject
@property (nonatomic) AWEPublishCreateModelParamContext context;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)publishRequestParams:context:;
- (id)clipsInfoForVideo;
- (id)clipsInfoForImageAlbum;
- (id)clipDataForVideo;
- (id)clipDataForSlides;
- (id)clipDataForImageAlbum;
- (id)clipsForVideo;
- (id)clipsForImageAlbum;
- (id)durationWithContext:;
- (id)clipsForSlides;
- (id)musicBeatsForSlides;
- (long long)imagesCoverIndex;
- (void)setContext:;
- (void).cxx_destruct;
- (id)context;
@end
