@interface IAPNavigationAccessory : NSObject
@property (nonatomic) BOOL _wasFoundInLastUpdate;
@property (nonatomic) Q identifier;
@property (nonatomic) NSSet components;
- (id)components;
- (void)setComponents:;
- (unsigned long long)identifier;
- (unsigned long long)hash;
- (id)initWithDict:;
- (void).cxx_destruct;
- (id)description;
- (void)setIdentifier:;
- (BOOL)isEqual:;
- (BOOL)requestedSourceNameForAnyComponent;
- (BOOL)requestedSourceSupportsRouteGuidanceForAnyComponent;
- (BOOL)_wasFoundInLastUpdate;
- (void)set_wasFoundInLastUpdate:;
@end
