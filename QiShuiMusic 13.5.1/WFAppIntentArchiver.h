@interface WFAppIntentArchiver : NSObject
@property (nonatomic) LNFullyQualifiedActionIdentifier actionIdentifier;
@property (nonatomic) LNActionMetadata actionMetadata;
- (id)actionIdentifier;
- (void).cxx_destruct;
- (id)archiveAction:error:;
- (id)initWithIdentifier:actionMetadata:;
- (id)unarchiveActionFromData:error:;
- (id)actionMetadata;
- (void)setActionMetadata:;
- (void)archiveAction:completion:;
- (void)unarchiveActionFromData:completion:;
- (id)resolvedActionMetadataWithError:;
@end
