@interface GEOLabelGeometry : NSObject
@property (nonatomic) NSArray labelShape;
@property (nonatomic) BOOL hasSelectionPolygon;
- (void).cxx_destruct;
- (id)initWithLabelShape:hasSelectionPolygon:;
- (id)initWithGEOPDLabelGeometry:;
- (id)labelShape;
- (BOOL)hasSelectionPolygon;
@end
