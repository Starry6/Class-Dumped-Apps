@interface SAGuidanceCheckForGuideUpdates : SABaseCommand
@property (nonatomic) NSNumber currentGuideTag;
@property (nonatomic) NSArray supportedFeatures;
@property (nonatomic) NSString aceId;
@property (nonatomic) NSString refId;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)supportedFeatures;
- (void)setSupportedFeatures:;
- (id)currentGuideTag;
- (void)setCurrentGuideTag:;
+ (id)checkForGuideUpdates;
+ (id)checkForGuideUpdatesWithDictionary:context:;
@end
