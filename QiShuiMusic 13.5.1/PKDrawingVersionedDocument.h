@interface PKDrawingVersionedDocument : PKVersionedDocument
@property (nonatomic) PKDrawingConcrete drawing;
@property (nonatomic) # drawingClass;
@property (nonatomic) BOOL loadNonInkingStrokes;
- (void).cxx_destruct;
- (id)drawing;
- (id)initWithDrawing:;
- (void)mergeVersion:fromData:;
- (id)serializeCurrentVersion:;
- (unsigned long long)mergeWithDrawingVersionedDocument:;
- (void)setDrawing:;
- (BOOL)loadUnzippedData:;
- (id)initWithDrawingClass:;
- (BOOL)loadNonInkingStrokes;
- (void)setLoadNonInkingStrokes:;
- (Class)drawingClass;
- (void)setDrawingClass:;
+ (unsigned int)minimumSupportedVersion;
+ (unsigned int)serializationVersion;
@end
