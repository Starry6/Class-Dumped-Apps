@interface LPStreamingMediaMetadataProviderSpecialization : LPMetadataProviderSpecialization
- (void)cancel;
- (void)start;
- (void).cxx_destruct;
- (void)done;
- (void)fail;
+ (unsigned long long)specialization;
+ (id)specializedMetadataProviderForResourceWithContext:;
@end
