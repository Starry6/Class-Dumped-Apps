@interface FFFeatureSet : NSObject
@property (nonatomic) FFFeatureSetIdentifier identifier;
@property (nonatomic) NSArray features;
- (id)identifier;
- (void)setFeatures:;
- (void).cxx_destruct;
- (id)features;
- (id)initWithIdentifier:;
- (id)initWithGroup:set:;
@end
