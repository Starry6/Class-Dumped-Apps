@interface SAPhoneCallSearchResult : SADomainObject
@property (nonatomic) NSDate callTime;
@property (nonatomic) SAPersonAttribute contact;
@property (nonatomic) NSNumber isNew;
- (id)groupIdentifier;
- (void)setIsNew:;
- (id)contact;
- (void)setContact:;
- (id)isNew;
- (id)encodedClassName;
- (id)callTime;
- (void)setCallTime:;
+ (id)callSearchResult;
+ (id)callSearchResultWithDictionary:context:;
@end
