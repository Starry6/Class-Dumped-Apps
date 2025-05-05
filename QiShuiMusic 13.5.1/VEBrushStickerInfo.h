@interface VEBrushStickerInfo : NSObject
@property (nonatomic) NSInteger undoCount;
@property (nonatomic) NSInteger redoCount;
@property (nonatomic) double strokeSize;
@property (nonatomic) double boundingLeft;
@property (nonatomic) double boundingTop;
@property (nonatomic) double boundingRight;
@property (nonatomic) double boundingBottom;
@property (nonatomic) double memCacheSize;
@property (nonatomic) double totalCacheSize;
- (void)setBoundingTop:;
- (double)boundingBottom;
- (double)boundingLeft;
- (double)boundingRight;
- (double)boundingTop;
- (double)memCacheSize;
- (int)redoCount;
- (void)setBoundingBottom:;
- (void)setBoundingLeft:;
- (void)setBoundingRight:;
- (void)setMemCacheSize:;
- (void)setRedoCount:;
- (void)setTotalCacheSize:;
- (void)setUndoCount:;
- (int)undoCount;
- (double)totalCacheSize;
- (double)strokeSize;
- (void)setStrokeSize:;
@end
