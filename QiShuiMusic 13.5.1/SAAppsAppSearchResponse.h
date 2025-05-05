@interface SAAppsAppSearchResponse : SABaseCommand
@property (nonatomic) NSArray foundApps;
@property (nonatomic) NSString aceId;
@property (nonatomic) NSString refId;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)foundApps;
- (void)setFoundApps:;
+ (id)appSearchResponse;
+ (id)appSearchResponseWithDictionary:context:;
@end
