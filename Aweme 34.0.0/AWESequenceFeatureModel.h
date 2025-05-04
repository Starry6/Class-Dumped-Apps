@interface AWESequenceFeatureModel : AWEBaseFeatureModel
@property (nonatomic) q is_dup;
@property (nonatomic) q itemStatus;
@property (nonatomic) NSMutableDictionary custom;
@property (nonatomic) NSMutableDictionary extra;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setExtra:;
- (void)updateFeature:forKey:extra:;
- (id)featureForKey:extra:;
- (BOOL)modelCustomTransformToDictionary:;
- (long long)is_dup;
- (void)setIs_dup:;
- (id)custom;
- (id)extra;
- (void).cxx_destruct;
- (void)setCustom:;
- (long long)itemStatus;
- (void)setItemStatus:;
+ (id)modelPropertyBlacklist;
+ (id)internalFeatures;
@end
