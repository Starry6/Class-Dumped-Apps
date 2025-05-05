@interface SALocalSearchShowLocalSearchResult : SADomainCommand
@property (nonatomic) NSString extSessionGuid;
@property (nonatomic) NSDate extSessionGuidCreatedTimestamp;
@property (nonatomic) NSData rawData;
- (id)groupIdentifier;
- (void)setRawData:;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)rawData;
- (id)extSessionGuid;
- (void)setExtSessionGuid:;
- (id)extSessionGuidCreatedTimestamp;
- (void)setExtSessionGuidCreatedTimestamp:;
+ (id)showLocalSearchResult;
+ (id)showLocalSearchResultWithDictionary:context:;
@end
