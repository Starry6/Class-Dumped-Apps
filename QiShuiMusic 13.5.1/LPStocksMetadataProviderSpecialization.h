@interface LPStocksMetadataProviderSpecialization : LPMetadataProviderSpecialization
+ (unsigned long long)specialization;
+ (BOOL)generateSpecializedMetadataForCompleteMetadata:withContext:completionHandler:;
@end
