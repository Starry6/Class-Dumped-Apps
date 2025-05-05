@interface AXElementVision__generated__Output : NSObject
@property (nonatomic) MLMultiArray confidence;
@property (nonatomic) MLMultiArray coordinates;
@property (nonatomic) NSSet featureNames;
- (id)confidence;
- (void)setConfidence:;
- (id)featureValueForName:;
- (id)featureNames;
- (void).cxx_destruct;
- (id)coordinates;
- (void)setCoordinates:;
- (id)initWithConfidence:coordinates:;
@end
