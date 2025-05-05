@interface CalDAVContainerChecksumSyncTaskGroup : CalDAVContainerSyncTaskGroup
@property (nonatomic) NSArray preferredChecksumVersions;
@property (nonatomic) <CalDAVChecksumLocalDBInfoProvider> delegate;
@property (nonatomic) CoreDAVItemParserMapping bestServerChecksumVersion;
@property (nonatomic) BOOL mismatchDetected;
- (void)startTaskGroup;
- (void).cxx_destruct;
- (id)copyAdditionalResourcePropertiesToFetch;
- (void)receivedPropertiesToValues:forURL:;
- (BOOL)shouldDownloadResource:localETag:serverETag:;
- (void)deleteResourceURLs:;
- (id)initWithFolderURL:previousCTag:previousSyncToken:actions:accountInfoProvider:taskManager:appSpecificCalendarItemClass:;
- (void)_handleResponseToChecksumPropfind:;
- (id)_calculatedCalendarHome;
- (BOOL)_hadOutOfDateCollectionToken;
- (void)_serverChecksumSupportPropfind;
- (id)preferredChecksumVersions;
- (void)setPreferredChecksumVersions:;
- (id)bestServerChecksumVersion;
- (void)setBestServerChecksumVersion:;
- (BOOL)mismatchDetected;
@end
