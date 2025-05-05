@interface SAAIRequestSearch : SABaseClientBoundCommand
@property (nonatomic) NSString acousticIdSearchSessionId;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)acousticIdSearchSessionId;
- (void)setAcousticIdSearchSessionId:;
+ (id)requestSearch;
+ (id)requestSearchWithDictionary:context:;
@end
