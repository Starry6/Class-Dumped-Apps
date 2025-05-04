@interface AWEDPUndertakeReporter : NSObject
@property (nonatomic) NSArray advertisedSchemaScenes;
- (void)reportSchemaIfNeeded:;
- (void)setAdvertisedSchemaScenes:;
- (void)p_reportEcomcfWithQueryParams:schema:;
- (void)p_reportSummerConcertAdvertisedSchema:path:queryParams:;
- (void)p_reportRegularAdvertisedSchema:path:queryParams:;
- (void)p_reportToAdvertisedUndertake:;
- (id)advertisedSchemaScenes;
- (BOOL)checkMatchedOfKeys:values:queryParams:;
- (id)init;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
