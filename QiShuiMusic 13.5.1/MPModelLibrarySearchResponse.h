@interface MPModelLibrarySearchResponse : MPModelLibraryResponse
- (id)initWithRequest:;
- (void)dealloc;
- (void)_mediaLibraryDidChangeNotification:;
- (BOOL)hasMoreResultsForSectionAtIndex:;
- (long long)searchWeightForIndexPath:;
@end
