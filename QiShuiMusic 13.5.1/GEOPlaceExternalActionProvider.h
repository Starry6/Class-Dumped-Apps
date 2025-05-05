@interface GEOPlaceExternalActionProvider : NSObject
@property (nonatomic) NSString appAdamId;
@property (nonatomic) NSArray supportedIntegrations;
- (void).cxx_destruct;
- (id)initWithActionLink:attributionMap:;
- (id)supportedIntegrations;
- (id)appAdamId;
@end
