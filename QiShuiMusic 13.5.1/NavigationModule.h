@interface NavigationModule : NSObject
@property (nonatomic) @ extraData;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)navigateTo:param:;
- (void)registerRoute:;
- (void)replace:param:;
- (id)init;
- (void)goBack;
+ (id)methodLookup;
+ (id)name;
@end
