@interface GEOPlaceTemplate : NSObject
@property (nonatomic) GEOMapItemIdentifier mapItemIdentifier;
@property (nonatomic) BOOL supportsAreaHighlight;
@property (nonatomic) BOOL hasRichData;
@property (nonatomic) <GEOMapItemPhoto> heroImage;
@property (nonatomic) GEOFeatureStyleAttributes styleAttributes;
@property (nonatomic) NSString placeName;
@property (nonatomic) GEOPlaceLineTemplate subtitleLine;
@property (nonatomic) GEOPlaceLineTemplate footerLine;
- (void).cxx_destruct;
- (id)styleAttributes;
- (id)placeName;
- (id)mapItemIdentifier;
- (id)initWithIdentifier:supportsAreaHighlight:;
- (id)initWithPlaceTemplate:attributionMap:;
- (BOOL)supportsAreaHighlight;
- (id)subtitleLine;
- (id)footerLine;
- (id)heroImage;
- (BOOL)hasRichData;
@end
