@interface PDFDestination : NSObject
@property (nonatomic) PDFPage page;
@property (nonatomic) {CGPoint=dd} point;
@property (nonatomic) double zoom;
- (void)setZoom:;
- (double)zoom;
- (id)page;
- (id)point;
- (id)init;
- (void)dealloc;
- (void)commonInit;
- (int)type;
- (id)document;
- (long long)compare:;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:;
- (id)initWithPage:atPoint:;
- (id)pageIfExists;
- (id)initWithDictionary:forDocument:;
- (id)createArrayRef;
@end
