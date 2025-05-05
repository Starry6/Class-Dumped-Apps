@interface SACarPlaySupportedOEMAppIdList : SADomainObject
@property (nonatomic) NSArray appIds;
- (id)groupIdentifier;
- (id)encodedClassName;
- (id)appIds;
- (void)setAppIds:;
+ (id)carPlaySupportedOEMAppIdList;
+ (id)carPlaySupportedOEMAppIdListWithDictionary:context:;
@end
