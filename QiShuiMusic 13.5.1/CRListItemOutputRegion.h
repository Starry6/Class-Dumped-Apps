@interface CRListItemOutputRegion : CRCompositeOutputRegion
@property (nonatomic) CRListItemMarker marker;
@property (nonatomic) {_NSRange=QQ} markerRange;
@property (nonatomic) q markerType;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (unsigned long long)type;
- (void).cxx_destruct;
- (id)marker;
- (long long)markerType;
- (void)setMarker:;
- (id)markerRange;
- (id)layoutComponents;
- (id)regionsSuitableForDataDetectorOutput;
- (id)initWithParagraphs:marker:;
- (id)listItemByAppendingParagraph:;
- (BOOL)canBeSucceededByListItem:;
+ (BOOL)textStartsWithListItem:;
+ (id)listItemForParagraph:;
+ (id)listItemMarkerForText:requiresAdjacentText:;
+ (id)_detectPredefinedListMarker:fromSet:markerType:;
+ (id)decorativeDecimalsSet;
+ (id)bulletsSet;
+ (id)hyphensSet;
+ (id)extendedMarkersSet;
+ (id)startOfMarkerSet;
+ (id)endOfMarkerSet;
@end
