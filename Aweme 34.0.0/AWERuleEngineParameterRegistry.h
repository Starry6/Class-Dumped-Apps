@interface AWERuleEngineParameterRegistry : HTSService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)registerParameterWithKey:type:builder:;
@end
