@interface WFWorkflowRunRequest : NSObject
@property (nonatomic) NSData archivedInput;
@property (nonatomic) WFContentCollection cachedInput;
@property (nonatomic) Q presentationMode;
@property (nonatomic) @ queueIdentifier;
@property (nonatomic) NSString runSource;
@property (nonatomic) NSString parentBundleIdentifier;
@property (nonatomic) NSString automationType;
@property (nonatomic) BOOL isAutomationSuggestion;
@property (nonatomic) NSString trialID;
@property (nonatomic) NSDictionary listenerEndpoints;
@property (nonatomic) Q outputBehavior;
@property (nonatomic) Q focusHandling;
@property (nonatomic) BOOL allowsDialogNotifications;
@property (nonatomic) BOOL allowsHandoff;
@property (nonatomic) BOOL donateInteraction;
@property (nonatomic) BOOL logRunEvent;
@property (nonatomic) NSString parentRunningContextIdentifier;
@property (nonatomic) NSXPCListenerEndpoint remoteDialogPresenterEndpoint;
@property (nonatomic) NSSet extensionResourceClasses;
- (id)queueIdentifier;
- (void)setTrialID:;
- (id)trialID;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (BOOL)donateInteraction;
- (unsigned long long)presentationMode;
- (void).cxx_destruct;
- (id)description;
- (void)setPresentationMode:;
- (id)initWithInput:presentationMode:;
- (void)getInputWithCompletionHandler:;
- (id)unableToDecodeInputError;
- (id)runSource;
- (void)setRunSource:;
- (id)parentBundleIdentifier;
- (void)setParentBundleIdentifier:;
- (id)automationType;
- (void)setAutomationType:;
- (BOOL)isAutomationSuggestion;
- (void)setIsAutomationSuggestion:;
- (id)listenerEndpoints;
- (void)setListenerEndpoints:;
- (unsigned long long)outputBehavior;
- (void)setOutputBehavior:;
- (unsigned long long)focusHandling;
- (void)setFocusHandling:;
- (BOOL)allowsDialogNotifications;
- (void)setAllowsDialogNotifications:;
- (BOOL)allowsHandoff;
- (void)setAllowsHandoff:;
- (void)setDonateInteraction:;
- (BOOL)logRunEvent;
- (void)setLogRunEvent:;
- (id)parentRunningContextIdentifier;
- (void)setParentRunningContextIdentifier:;
- (id)remoteDialogPresenterEndpoint;
- (void)setRemoteDialogPresenterEndpoint:;
- (id)extensionResourceClasses;
- (void)setExtensionResourceClasses:;
- (id)archivedInput;
- (id)cachedInput;
- (void)setCachedInput:;
+ (BOOL)supportsSecureCoding;
@end
