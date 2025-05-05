@interface AFContextDonationService : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)_connection;
- (void).cxx_destruct;
- (id)_init;
- (void)deviceContextConnectionDidInvalidate:;
- (void)registerContextTransformer:forType:;
- (void)donateContext:withMetadata:pushToRemote:;
- (void)setDonationService:;
- (void)donateContext:withMetadata:pushToRemote:completion:;
+ (id)defaultService;
@end
