@interface PKDetectionItem : NSObject
@property (nonatomic) PKDetectionQueryItem queryItem;
@property (nonatomic) UIBezierPath boundsPath;
@property (nonatomic) UIBezierPath baselinePath;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} frame;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} strokeBounds;
@property (nonatomic) double strokeWidth;
@property (nonatomic) UIColor inkColor;
@property (nonatomic) PKRecognitionSessionManager sessionManager;
@property (nonatomic) NSUUID cachedUUID;
@property (nonatomic) BOOL validCachedUUID;
@property (nonatomic) PKDrawing drawing;
@property (nonatomic) UIColor strokeColor;
- (double)strokeWidth;
- (void)setFrame:;
- (id)initWithSessionManager:;
- (id)setUUID:;
- (void)setStrokeWidth:;
- (id)strokeColor;
- (id)frame;
- (void).cxx_destruct;
- (id)sessionManager;
- (id)UUID;
- (id)image;
- (id)_strokes;
- (id)inkColor;
- (void)setInkColor:;
- (id)drawing;
- (void)setSessionManager:;
- (void)setDrawing:;
- (id)baselinePath;
- (id)strokeBounds;
- (id)_baselinePath;
- (void)_generatePaths;
- (id)boundsPath;
- (id)_actionNameForActivation:;
- (id)queryItem;
- (void)setQueryItem:;
- (void)setBoundsPath:;
- (void)setBaselinePath:;
- (void)setStrokeBounds:;
- (id)cachedUUID;
- (void)setCachedUUID:;
- (BOOL)validCachedUUID;
- (void)setValidCachedUUID:;
@end
