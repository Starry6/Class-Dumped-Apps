@interface CRParagraphOutputRegionGeometryInfo : CROutputRegionGeometryInfo
@property (nonatomic) CROutputRegionGeometryInfo firstLine;
@property (nonatomic) CROutputRegionGeometryInfo lastLine;
@property (nonatomic) BOOL isCenterJustified;
- (void).cxx_destruct;
- (id)firstLine;
- (id)initFromParagraphOutputRegion:;
- (id)lastLine;
- (BOOL)isCenterJustified;
@end
