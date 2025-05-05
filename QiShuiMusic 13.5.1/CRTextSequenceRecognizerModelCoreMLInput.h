@interface CRTextSequenceRecognizerModelCoreMLInput : NSObject
@property (nonatomic) MLMultiArray img_input;
@property (nonatomic) NSArray textFeatureInfo;
@property (nonatomic) NSSet featureNames;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)featureValueForName:;
- (id)featureNames;
- (void).cxx_destruct;
- (id)textFeatureInfo;
- (void)setTextFeatureInfo:;
- (id)initWithImg_input:featureInfo:;
- (id)img_input;
- (void)setImg_input:;
@end
