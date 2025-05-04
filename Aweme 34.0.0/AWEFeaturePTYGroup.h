@interface AWEFeaturePTYGroup : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)trackEvent:params:;
- (id)trackEvents;
- (id)groupName;
- (id)featureDescriptions;
+ (id)sharedInstance;
@end
