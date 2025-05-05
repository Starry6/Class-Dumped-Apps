@interface VKRouteEtaDescription : NSObject
@property (nonatomic) NSString etaText;
@property (nonatomic) C glyphType;
@property (nonatomic) GEOFeatureStyleAttributes styleAttributes;
@property (nonatomic) q routeEtaType;
- (unsigned long long)hash;
- (long long)compare:;
- (void).cxx_destruct;
- (id).cxx_construct;
- (BOOL)isEqual:;
- (id)styleAttributes;
- (id)initWithEtaText:etaAdvisoryStyleAttributes:;
- (id)initWithEtaText:etaAdvisoryStyleAttributes:routeEtaType:;
- (id)initWithEtaText:glyphType:;
- (id)initWithEtaText:;
- (id)initWithEtaText:etaAdvisoryFeatureStyleAttributes:;
- (id)initWithEtaText:etaAdvisoryFeatureStyleAttributes:routeEtaType:;
- (id)_initWithEtaText:styleAttributes:routeEtaType:;
- (id)etaText;
- (unsigned char)glyphType;
- (long long)routeEtaType;
@end
