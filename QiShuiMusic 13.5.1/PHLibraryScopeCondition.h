@interface PHLibraryScopeCondition : NSObject
@property (nonatomic) PLLibraryScopeCondition proxyObject;
@property (nonatomic) Q type;
@property (nonatomic) Q criteria;
- (id)init;
- (void).cxx_destruct;
- (id)description;
- (id)proxyObject;
- (id)forwardingTargetForSelector:;
- (id)copyWithZone:;
- (id)initWithProxyObject:;
- (void)setProxyObject:;
+ (id)forwardingTargetForSelector:;
+ (Class)_mappedPLConditionClass;
@end
