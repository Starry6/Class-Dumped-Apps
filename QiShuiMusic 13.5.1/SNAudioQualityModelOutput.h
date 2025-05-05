@interface SNAudioQualityModelOutput : NSObject
@property (nonatomic) NSDictionary final_output;
@property (nonatomic) NSString classLabel;
@property (nonatomic) NSSet featureNames;
- (id)featureValueForName:;
- (id)featureNames;
- (void).cxx_destruct;
- (id)classLabel;
- (void)setClassLabel:;
- (id)initWithFinal_output:classLabel:;
- (id)final_output;
- (void)setFinal_output:;
@end
