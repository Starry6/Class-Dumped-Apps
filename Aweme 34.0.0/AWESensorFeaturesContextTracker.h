@interface AWESensorFeaturesContextTracker : HTSService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)fillFeatures:withModel:config:;
- (id)getFeature:params:;
@end
