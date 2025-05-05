@interface CardDAVFolderInfoTaskGroup : CoreDAVContainerInfoTaskGroup
- (id)initWithAccountInfoProvider:containerURLs:directoryGatewayURLs:taskManager:;
- (int)containerInfoDepthForURL:;
- (void).cxx_destruct;
- (id)_copyContainerWithURL:andProperties:;
- (id)_copyContainerParserMappings;
@end
