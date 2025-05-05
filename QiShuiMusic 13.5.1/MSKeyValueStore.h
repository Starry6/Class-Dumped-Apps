@interface MSKeyValueStore : MSMailDefaultService
- (void)_simulateServicesMethod:arguments:callback:;
- (void)_valueForKey:handler:;
+ (id)valueForKey:;
@end
