@interface CardDAVGetAccountPropertiesTaskGroup : CoreDAVGetAccountPropertiesTaskGroup
@property (nonatomic) NSSet addressBookHomes;
@property (nonatomic) NSSet directoryGatewayURLs;
- (id)_copyAccountPropertiesPropFindElements;
- (id)homeSet;
- (void)_setPropertiesFromParsedResponses:;
- (id)directoryGatewayURLs;
- (id)addressBookHomes;
- (id)directoryGatewayURL;
- (void).cxx_destruct;
- (id)description;
@end
