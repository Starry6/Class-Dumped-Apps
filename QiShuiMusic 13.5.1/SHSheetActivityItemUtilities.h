@interface SHSheetActivityItemUtilities : NSObject
+ (id)urlForActivityItem:;
+ (id)itemProvidersFromActivityItems:;
+ (void)loadMetadataFromGroupActivityItemProviders:completion:;
+ (void)_loadMetadataFromRemainingGroupActivityItemProviders:loadedMetadata:loadedError:completion:;
@end
