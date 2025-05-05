@interface VKARWalkingFeatureDidUpdateInfo : NSObject
@property (nonatomic) q updateTypes;
@property (nonatomic) VKARWalkingFeatureSet featureSet;
@property (nonatomic) VKARWalkingFeature feature;
@property (nonatomic) Q featureLabelIdentifier;
@property (nonatomic) {?=ddd} labelPosition;
@property (nonatomic) BOOL isVisible;
@property (nonatomic) BOOL isDirectlyBehind;
@property (nonatomic) double screenHeading;
- (id)feature;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isVisible;
- (id)labelPosition;
- (id).cxx_construct;
- (id)featureSet;
- (unsigned long long)featureLabelIdentifier;
- (id)initWithFeature:featureLabelIdentifier:featureSet:labelPosition:updateTypes:isVisible:isDirectlyBehind:screenHeading:;
- (double)screenHeading;
- (id)stringForUpdateTypes;
- (long long)updateTypes;
- (BOOL)isDirectlyBehind;
@end
