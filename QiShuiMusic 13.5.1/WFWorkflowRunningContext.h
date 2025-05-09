@interface WFWorkflowRunningContext : NSObject
@property (nonatomic) NSString identifier;
@property (nonatomic) NSString workflowIdentifier;
@property (nonatomic) NSDate creationDate;
@property (nonatomic) NSString progressCategory;
@property (nonatomic) BOOL allowsDialogNotifications;
@property (nonatomic) Q presentationMode;
@property (nonatomic) Q outputBehavior;
@property (nonatomic) NSURL outputRootIfRunningInFinder;
@property (nonatomic) WFContextualAction contextualAction;
@property (nonatomic) WFContextualActionContext contextualActionContext;
@property (nonatomic) BOOL isShortcutsApp;
@property (nonatomic) NSString automationType;
@property (nonatomic) NSString rootWorkflowIdentifier;
@property (nonatomic) NSString runSource;
@property (nonatomic) NSString originatingBundleIdentifier;
- (void)setCreationDate:;
- (id)identifier;
- (id)initWithCoder:;
- (void)removeProgressSubscriber:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (unsigned long long)presentationMode;
- (void).cxx_destruct;
- (id)description;
- (void)setPresentationMode:;
- (void)setIdentifier:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)creationDate;
- (id)originatingBundleIdentifier;
- (void)setOriginatingBundleIdentifier:;
- (id)initWithWorkflowIdentifier:;
- (id)contextualAction;
- (id)runSource;
- (void)setRunSource:;
- (id)automationType;
- (void)setAutomationType:;
- (unsigned long long)outputBehavior;
- (void)setOutputBehavior:;
- (BOOL)allowsDialogNotifications;
- (void)setAllowsDialogNotifications:;
- (BOOL)isShortcutsApp;
- (id)addProgressSubscriberUsingPublishingHandler:;
- (id)progressForPublishingWithTotalUnitCount:cancellationHandler:;
- (id)copyWithNewIdentity;
- (id)workflowIdentifier;
- (void)setWorkflowIdentifier:;
- (id)rootWorkflowIdentifier;
- (void)setRootWorkflowIdentifier:;
- (id)progressCategory;
- (id)outputRootIfRunningInFinder;
- (void)setOutputRootIfRunningInFinder:;
- (void)setContextualAction:;
- (id)contextualActionContext;
- (void)setContextualActionContext:;
+ (BOOL)supportsSecureCoding;
@end
