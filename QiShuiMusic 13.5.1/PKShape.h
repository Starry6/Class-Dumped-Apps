@interface PKShape : NSObject
@property (nonatomic) q type;
@property (nonatomic) NSArray strokes;
@property (nonatomic) PKStroke originalStroke;
@property (nonatomic) BOOL fillable;
- (long long)type;
- (void).cxx_destruct;
- (id)strokes;
- (id)initWithShapeType:strokes:originalStroke:;
- (BOOL)fillable;
- (id)originalStroke;
+ (id)snapToShapeActionNameForNumShapes:;
@end
