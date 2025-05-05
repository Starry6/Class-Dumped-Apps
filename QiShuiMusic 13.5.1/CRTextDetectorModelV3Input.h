@interface CRTextDetectorModelV3Input : NSObject
@property (nonatomic) ^{__CVBuffer=} img_input;
@property (nonatomic) NSSet featureNames;
- (id)featureValueForName:;
- (id)featureNames;
- (id)img_input;
- (void)setImg_input:;
- (id)initWithImg_input:;
@end
