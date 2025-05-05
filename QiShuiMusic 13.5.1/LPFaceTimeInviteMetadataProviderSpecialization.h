@interface LPFaceTimeInviteMetadataProviderSpecialization : LPMetadataProviderSpecialization
- (void)start;
- (void)completeWithMetadata:;
+ (unsigned long long)specialization;
+ (id)specializedMetadataProviderForURLWithContext:;
@end
