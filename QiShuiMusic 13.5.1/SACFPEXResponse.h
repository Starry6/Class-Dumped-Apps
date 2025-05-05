@interface SACFPEXResponse : SABaseCommand
@property (nonatomic) NSArray pexItems;
@property (nonatomic) NSString aceId;
@property (nonatomic) NSString refId;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)pexItems;
- (void)setPexItems:;
+ (id)response;
+ (id)responseWithDictionary:context:;
@end
