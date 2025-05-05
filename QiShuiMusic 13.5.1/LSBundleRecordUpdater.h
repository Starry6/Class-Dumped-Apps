@interface LSBundleRecordUpdater : LSRecordBuilder
- (void)dealloc;
- (id)initWithBundleIdentifier:;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithDatabase:bundleUnit:bundleData:;
- (id)initWithBundleIdentifier:preferPlaceholder:;
- (void)parseiTunesMetadata:;
- (void)parseSINFDictionary:;
- (void)parsePlaceholderMetadata:;
- (BOOL)parsePersonas:error:;
- (BOOL)updateBundleRecord:;
- (BOOL)checkNeedsUpdateForiTunesMetadata:SINFo:placeholderMetadata:;
@end
