@interface SAHLGetActiveWorkoutApplicationIdentifierResponse : SABaseCommand
@property (nonatomic) NSString appBundleId;
@property (nonatomic) NSString aceId;
@property (nonatomic) NSString refId;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setAppBundleId:;
- (id)groupIdentifier;
- (id)appBundleId;
- (BOOL)requiresResponse;
- (id)encodedClassName;
+ (id)getActiveWorkoutApplicationIdentifierResponse;
+ (id)getActiveWorkoutApplicationIdentifierResponseWithDictionary:context:;
@end
