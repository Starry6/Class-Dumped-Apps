@interface LPApplePhotosSharedLibraryInvitationMetadataProviderSpecialization : LPMetadataProviderSpecialization
- (void)start;
- (void)completeWithOriginatorDisplayName:;
+ (unsigned long long)specialization;
+ (id)specializedMetadataProviderForURLWithContext:;
@end
