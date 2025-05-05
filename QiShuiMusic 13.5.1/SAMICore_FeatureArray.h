@interface SAMICore_FeatureArray : NSObject
@property (nonatomic) NSArray array;
@property (nonatomic) I numFeatures;
@property (nonatomic) I featureID;
- (void)setFeatureID:;
- (id)array;
- (unsigned int)featureID;
- (void)setArray:;
- (unsigned int)numFeatures;
- (void)setNumFeatures:;
@end
