@interface CNiOSABContactsUserDefaultsABWrapper : NSObject
- (void)setLastIgnoredNewDuplicatesCount:;
- (long long)lastIgnoredNewDuplicatesCount;
- (unsigned int)ABPersonGetSortOrdering;
- (id)abDefaultCountryCode;
- (unsigned int)ABPersonGetCompositeNameFormatForRecord:;
- (BOOL)ABPersonGetShortNamePreferNicknames;
- (void)ABPersonSetShortNameFormat:;
- (void)ABPersonSetShortNamePreferNicknames:;
- (unsigned int)ABPersonGetShortNameFormat;
- (id)displayedContactsFilterRepresentationPref;
- (void)ABPersonSetShortNameFormatEnabled:;
- (unsigned int)ABPersonGetEditNameFormat;
- (void)setDisplayedContactsFilterRepresentationPref:;
- (void)ABPersonSetCompositeNameFormat:;
- (BOOL)ABPersonGetShortNameFormatEnabled;
@end
