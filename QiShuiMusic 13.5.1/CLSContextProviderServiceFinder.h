@interface CLSContextProviderServiceFinder : NSObject
@property (nonatomic) NSArray availableServices;
- (id)init;
- (void)start;
- (void)stop;
- (void).cxx_destruct;
- (id)initWithDelegate:;
- (id)availableServices;
@end
