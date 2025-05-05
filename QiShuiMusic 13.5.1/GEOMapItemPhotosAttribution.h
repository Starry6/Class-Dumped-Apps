@interface GEOMapItemPhotosAttribution : GEOMapItemAttribution
@property (nonatomic) NSArray addPhotoURLs;
@property (nonatomic) BOOL canAddPhotosLocally;
@property (nonatomic) BOOL canShowPhotosLocally;
@property (nonatomic) BOOL shouldSuppressPhotoAttribution;
@property (nonatomic) BOOL supportsReportingIssue;
@property (nonatomic) BOOL requiresAttributionInPhotoViewerHeader;
- (id)initWithSearchAttributionInfo:attributionURLs:yelpID:;
- (id)initWithSearchAttributionInfo:attributionURLs:poiID:;
- (id)addPhotoURLs;
- (id)urlsForPhotoWithIdentifier:;
- (BOOL)canAddPhotosLocally;
- (BOOL)canShowPhotosLocally;
- (BOOL)shouldSuppressPhotoAttribution;
- (BOOL)supportsReportingIssue;
- (BOOL)requiresAttributionInPhotoViewerHeader;
@end
