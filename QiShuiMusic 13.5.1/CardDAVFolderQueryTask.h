@interface CardDAVFolderQueryTask : CoreDAVContainerQueryTask
- (id)initWithSearchTerms:searchLimit:atURL:appSpecificDataItemClass:;
- (void)addFiltersToXMLData:;
@end
