@interface GEOMapItemChildAction : NSObject
@property (nonatomic) q childActionType;
@property (nonatomic) GEOMapItemChildActionSearch childActionSearch;
@property (nonatomic) GEOGuideLocation guideLocation;
- (void).cxx_destruct;
- (id)initWithChildAction:;
- (long long)childActionType;
- (void)setChildActionType:;
- (id)childActionSearch;
- (void)setChildActionSearch:;
- (id)guideLocation;
@end
