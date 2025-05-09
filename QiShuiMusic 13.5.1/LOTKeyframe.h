@interface LOTKeyframe : NSObject
@property (nonatomic) NSNumber keyframeTime;
@property (nonatomic) BOOL isHold;
@property (nonatomic) {CGPoint=dd} inTangent;
@property (nonatomic) {CGPoint=dd} outTangent;
@property (nonatomic) {CGPoint=dd} spatialInTangent;
@property (nonatomic) {CGPoint=dd} spatialOutTangent;
@property (nonatomic) double floatValue;
@property (nonatomic) {CGPoint=dd} pointValue;
@property (nonatomic) {CGSize=dd} sizeValue;
@property (nonatomic) UIColor colorValue;
@property (nonatomic) LOTBezierData pathData;
@property (nonatomic) NSArray arrayValue;
- (id)_colorValueFromArray:;
- (id)_pointFromValueArray:;
- (id)_pointFromValueDict:;
- (id)copyWithData:;
- (id)inTangent;
- (id)initWithLOTKeyframe:;
- (BOOL)isHold;
- (id)keyframeTime;
- (id)outTangent;
- (id)pathData;
- (void)remapValueWithBlock:;
- (void)setupOutputWithData:;
- (id)spatialInTangent;
- (id)spatialOutTangent;
- (double)floatValue;
- (id)arrayValue;
- (void).cxx_destruct;
- (id)pointValue;
- (void)setData:;
- (id)initWithValue:;
- (id)sizeValue;
- (id)colorValue;
- (id)initWithKeyframe:;
@end
