@interface LPRedditMetadataProviderSpecialization : LPMetadataProviderSpecialization
- (void).cxx_destruct;
+ (unsigned long long)specialization;
+ (BOOL)generateSpecializedMetadataForCompleteMetadata:withContext:completionHandler:;
@end
