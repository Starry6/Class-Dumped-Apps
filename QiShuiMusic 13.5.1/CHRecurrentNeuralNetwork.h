@interface CHRecurrentNeuralNetwork : NSObject
@property (nonatomic) NSString modelName;
- (id)modelName;
- (void).cxx_destruct;
- (id)initWithModelName:;
- (id)normalizedDrawing:targetHeight:minimumDrawingSize:interpolationDistance:outScaleFactor:outputPointMap:;
+ (id)normalizedDrawing:scaleFactor:interpolationDistance:outputPointMap:;
@end
