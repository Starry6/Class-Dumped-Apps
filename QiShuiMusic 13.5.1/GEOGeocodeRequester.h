@interface GEOGeocodeRequester : GEOServiceRequester
- (void)batchReverseGeocode:auditToken:success:networkActivity:error:;
- (void)cancelBatchReverseGeocode:;
+ (id)sharedGeocodeRequester;
@end
