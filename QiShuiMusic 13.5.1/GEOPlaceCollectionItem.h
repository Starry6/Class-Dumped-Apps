@interface GEOPlaceCollectionItem : NSObject
@property (nonatomic) NSString itemDescription;
@property (nonatomic) NSString itemHTMLDescription;
@property (nonatomic) GEOMapItemIdentifier itemIdentifier;
@property (nonatomic) NSArray photos;
@property (nonatomic) BOOL supportsPhotoFallback;
@property (nonatomic) NSURL reviewUrl;
@property (nonatomic) NSString reviewText;
@property (nonatomic) GEOQuickLink appClip;
@property (nonatomic) BOOL disableAppClipFallback;
- (id)itemIdentifier;
- (void).cxx_destruct;
- (id)description;
- (id)itemDescription;
- (id)photos;
- (id)itemHTMLDescription;
- (id)initWithPlaceCollectionItem:;
- (BOOL)supportsPhotoFallback;
- (id)reviewUrl;
- (id)reviewText;
- (id)appClip;
- (BOOL)disableAppClipFallback;
@end
