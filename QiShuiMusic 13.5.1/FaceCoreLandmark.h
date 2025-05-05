@interface FaceCoreLandmark : NSObject
@property (nonatomic) NSString type;
@property (nonatomic) Q pointCount;
@property (nonatomic) ^{CGPoint=dd} points;
- (void)dealloc;
- (id)type;
- (void).cxx_destruct;
- (id)points;
- (unsigned long long)pointCount;
- (id)initWithType:pointCount:points:;
+ (id)landmarkWithType:pointCount:points:;
@end
