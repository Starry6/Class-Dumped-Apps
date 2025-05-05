@interface GEOVectorTransitLine : NSObject
@property (nonatomic) GEOFeature feature;
@property (nonatomic) ^{GeoCodecsRGBAColor8=CCCC} color;
@property (nonatomic) I systemIndex;
@property (nonatomic) float minZoom;
@property (nonatomic) I subtitleOffset;
@property (nonatomic) I cartoId;
@property (nonatomic) I order;
- (id)feature;
- (float)minZoom;
- (unsigned int)cartoId;
- (unsigned int)order;
- (unsigned int)systemIndex;
- (id)color;
- (void).cxx_destruct;
- (id)get;
- (id)init:withVectorTile:;
- (unsigned int)subtitleOffset;
@end
