@interface SAPhoneIncomingCallSearchResult : SADomainObject
@property (nonatomic) SAPersonAttribute caller;
@property (nonatomic) NSString incomingCallType;
- (id)caller;
- (id)groupIdentifier;
- (void)setCaller:;
- (id)encodedClassName;
- (id)incomingCallType;
- (void)setIncomingCallType:;
+ (id)incomingCallSearchResult;
+ (id)incomingCallSearchResultWithDictionary:context:;
@end
