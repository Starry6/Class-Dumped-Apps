@interface IDSServiceMonitor : NSObject
@property (nonatomic) NSString service;
- (id)initWithService:;
- (void)dealloc;
- (void)_postAvailability:;
- (void)_updateAvailability;
- (id)service;
- (void)updateAvailability;
- (void).cxx_destruct;
- (id)description;
- (long long)serviceAvailability;
@end
