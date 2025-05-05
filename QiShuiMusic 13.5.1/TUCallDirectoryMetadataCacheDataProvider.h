@interface TUCallDirectoryMetadataCacheDataProvider : TUMetadataCacheDataProvider
@property (nonatomic) CXCallDirectoryManager callDirectoryManager;
@property (nonatomic) NSInteger identificationEntriesChangedNotifyToken;
@property (nonatomic) @? countryDialingCode;
@property (nonatomic) @? firstIdentificationEntriesForEnabledExtensions;
- (id)init;
- (int)identificationEntriesChangedNotifyToken;
- (void)updateCacheWithDestinationIDs:withGroup:;
- (void)dealloc;
- (id)firstIdentificationEntriesForEnabledExtensions;
- (id)callDirectoryManager;
- (void)setFirstIdentificationEntriesForEnabledExtensions:;
- (void).cxx_destruct;
- (void)setCountryDialingCode:;
- (id)countryDialingCode;
@end
