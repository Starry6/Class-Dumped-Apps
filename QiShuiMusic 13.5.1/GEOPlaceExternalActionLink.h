@interface GEOPlaceExternalActionLink : NSObject
@property (nonatomic) GEOQuickLink quickLink;
@property (nonatomic) GEOQuickLink appClipRepresentedAsQuickLink;
@property (nonatomic) GEOAttributionApp attributionAppForMapsExtension;
@property (nonatomic) NSInteger type;
@property (nonatomic) GEOPlaceExternalActionLinkQuickLinkParams quickLinkParams;
@property (nonatomic) GEOPlaceExternalActionLinkAppClipParams appClipParams;
@property (nonatomic) GEOPlaceExternalActionLinkExtensionParams siriExtensionParams;
- (int)type;
- (void).cxx_destruct;
- (id)quickLinkParams;
- (id)initWithLinkData:attributionMap:;
- (id)appClipParams;
- (id)siriExtensionParams;
- (id)quickLink;
- (id)appClipRepresentedAsQuickLink;
- (id)appClipUsingArtworkURL:title:;
- (id)attributionAppForMapsExtension;
@end
