@interface CRTextSequenceRecognizerModelCoreMLOutput : NSObject
@property (nonatomic) NSArray textFeatureInfo;
@property (nonatomic) MLMultiArray output_label_prob_map;
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
- (id)initWithOutput_label_prob_map:;
- (id)output_label_prob_map;
- (void)setOutput_label_prob_map:;
@end
