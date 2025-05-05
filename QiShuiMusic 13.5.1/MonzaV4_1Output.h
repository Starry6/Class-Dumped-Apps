@interface MonzaV4_1Output : NSObject
@property (nonatomic) MLMultiArray angle;
@property (nonatomic) NSSet featureNames;
- (id)featureValueForName:;
- (id)featureNames;
- (void).cxx_destruct;
- (id)angle;
- (void)setAngle:;
- (id)initWithAngle:;
@end
