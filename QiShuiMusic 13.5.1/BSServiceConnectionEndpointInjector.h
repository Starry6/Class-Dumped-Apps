@interface BSServiceConnectionEndpointInjector : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setService:;
- (id)init;
- (void)setInstance:;
- (void)dealloc;
- (void)setTarget:;
- (void).cxx_destruct;
- (void)setInheritingEnvironment:;
- (id)description;
- (void)setDomain:;
- (void)invalidate;
- (void)setAdditionalAttributes:;
+ (id)injectorWithConfigurator:;
@end
