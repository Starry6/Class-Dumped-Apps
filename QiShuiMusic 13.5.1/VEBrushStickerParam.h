@interface VEBrushStickerParam : NSObject
@property (nonatomic) Q options;
@property (nonatomic) NSString resPath;
@property (nonatomic) NSString param;
@property (nonatomic) {CGPoint=dd} touchPoint;
@property (nonatomic) {CGPoint=dd} delatPoint;
@property (nonatomic) double factor;
@property (nonatomic) NSString pngSavePath;
@property (nonatomic) @? pngSaveBlock;
- (id)resPath;
- (void)setPngSavePath:;
- (id)delatPoint;
- (id)pngSaveBlock;
- (id)pngSavePath;
- (void)setDelatPoint:;
- (void)setPngSaveBlock:;
- (void)setResPath:;
- (void)setTouchPoint:;
- (void)setOptions:;
- (void)setFactor:;
- (id)param;
- (unsigned long long)options;
- (void)setParam:;
- (void).cxx_destruct;
- (double)factor;
- (id)touchPoint;
@end
