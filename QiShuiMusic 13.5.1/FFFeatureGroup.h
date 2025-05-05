@interface FFFeatureGroup : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) NSDictionary featureSets;
@property (nonatomic) NSString disclosure;
@property (nonatomic) NSDictionary attributes;
- (id)disclosure;
- (id)initWithName:;
- (void)setFeatureSets:;
- (void)setAttributes:;
- (id)attributes;
- (void).cxx_destruct;
- (void)setDisclosure:;
- (id)name;
- (id)featureSets;
@end
