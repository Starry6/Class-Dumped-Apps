@interface ML3SetCloudIDImportOperation : ML3ImportOperation
- (void)main;
- (void).cxx_destruct;
- (unsigned long long)importSource;
- (BOOL)_performImportWithTransaction:;
- (BOOL)_importTracksUsingImportSession:;
- (BOOL)_importPlaylistsUsingImportSession:;
@end
