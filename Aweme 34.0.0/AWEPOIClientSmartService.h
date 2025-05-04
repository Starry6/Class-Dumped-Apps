@interface AWEPOIClientSmartService : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)getFeatureListFromStatic:;
- (id)getFeatureFromLocalLife:;
- (id)getFeatureFromSolaria:;
+ (id)sharedManager;
@end
