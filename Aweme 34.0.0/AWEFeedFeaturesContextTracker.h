@interface AWEFeedFeaturesContextTracker : HTSService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)fillFeatures:withModel:config:;
- (id)getVideoTagFeatures:;
- (id)audioTagFeature:;
+ (BOOL)useCachedVideoModelMetaDict;
@end
