@interface GEOExploreGuides : NSObject
@property (nonatomic) GEOGuideLocation guideLocation;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)guideLocation;
- (id)initWithExploreGuides:;
- (id)imageURLForSize:;
- (id)imageDownloadUrlFromTemplateUrl:size:;
@end
