@interface SAUIGetResponseAlternatives : SAStartRequest
@property (nonatomic) BOOL locallyResolved;
@property (nonatomic) NSString requestId;
- (id)groupIdentifier;
- (id)requestId;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (void)setRequestId:;
- (BOOL)locallyResolved;
- (void)setLocallyResolved:;
+ (id)getResponseAlternatives;
+ (id)getResponseAlternativesWithDictionary:context:;
@end
