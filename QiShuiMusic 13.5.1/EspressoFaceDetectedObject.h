@interface EspressoFaceDetectedObject : NSObject
@property (nonatomic) float confidence;
@property (nonatomic) q objectType;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} bounds;
@property (nonatomic) {CGPoint=dd} center;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)center;
- (float)confidence;
- (void)setConfidence:;
- (void)setCenter:;
- (long long)objectType;
- (void)setBounds:;
- (id)bounds;
- (void)setObjectType:;
- (id)initWithOptionsXloc:yloc:size:confidence:;
@end
