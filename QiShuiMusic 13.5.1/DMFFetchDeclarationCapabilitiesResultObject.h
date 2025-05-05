@interface DMFFetchDeclarationCapabilitiesResultObject : CATTaskResultObject
@property (nonatomic) NSArray supportedCommands;
@property (nonatomic) NSArray supportedAssets;
@property (nonatomic) NSArray supportedConfigurations;
@property (nonatomic) NSArray supportedEvents;
@property (nonatomic) NSArray supportedActivations;
@property (nonatomic) NSArray supportedPredicates;
@property (nonatomic) NSArray supportedMessages;
- (id)supportedEvents;
- (void)setSupportedCommands:;
- (id)initWithCoder:;
- (id)supportedCommands;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)supportedMessages;
- (void)setSupportedMessages:;
- (id)supportedAssets;
- (void)setSupportedAssets:;
- (id)supportedConfigurations;
- (void)setSupportedConfigurations:;
- (void)setSupportedEvents:;
- (id)supportedActivations;
- (void)setSupportedActivations:;
- (id)supportedPredicates;
- (void)setSupportedPredicates:;
+ (BOOL)supportsSecureCoding;
@end
