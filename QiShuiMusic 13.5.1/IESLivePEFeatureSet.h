@interface IESLivePEFeatureSet : NSObject
@property (nonatomic) IESLiveThreadSafeDictionary featureDic;
@property (nonatomic) <IESLivePEFeatureSetDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)collectFeature:withDoubleValue:;
- (void)collectFeature:;
- (void)collectFeature:withStringValue:;
- (void)collectFeature:withBoolValue:;
- (void)collectFeature:withIntValue:;
- (void)featureChanged:withValue:;
- (id)featureDic;
- (void)setFeatureDic:;
- (id)init;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (id)featureSet;
- (void)addFeature:;
@end
