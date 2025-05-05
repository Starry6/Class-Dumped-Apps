@interface SAMPGetRoutesResponse : SABaseCommand
@property (nonatomic) NSArray speakers;
@property (nonatomic) NSString aceId;
@property (nonatomic) NSString refId;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)speakers;
- (void)setSpeakers:;
+ (id)getRoutesResponse;
+ (id)getRoutesResponseWithDictionary:context:;
@end
