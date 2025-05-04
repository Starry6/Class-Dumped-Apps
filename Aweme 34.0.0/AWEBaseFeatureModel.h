@interface AWEBaseFeatureModel : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)updateFeature:forKey:extra:;
- (id)featureForKey:extra:;
- (void)encodeWithCoder:;
- (id)toDictionary;
- (id)initWithCoder:;
@end
