@interface SASAcousticFeature : AceObject
@property (nonatomic) NSArray acousticFeaturePerFrame;
@property (nonatomic) NSNumber frameDuration;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)af_acousticFeature;
- (id)groupIdentifier;
- (id)encodedClassName;
- (id)frameDuration;
- (void)setFrameDuration:;
- (id)acousticFeaturePerFrame;
- (void)setAcousticFeaturePerFrame:;
+ (id)acousticFeature;
+ (id)acousticFeatureWithDictionary:context:;
@end
