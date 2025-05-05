@interface VCPVideoObjectTracker : NSObject
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} objectBoundsInitial;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} objectBounds;
@property (nonatomic) float confidence;
@property (nonatomic) {?=qiIq} start;
@property (nonatomic) NSInteger lostCount;
- (float)confidence;
- (id)start;
- (void).cxx_destruct;
- (id)initWithObjectBounds:inFrame:timestamp:;
- (int)trackObjectInFrame:;
- (id)objectBoundsInitial;
- (id)objectBounds;
- (int)lostCount;
@end
