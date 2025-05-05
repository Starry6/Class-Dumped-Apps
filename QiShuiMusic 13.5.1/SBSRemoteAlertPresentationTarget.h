@interface SBSRemoteAlertPresentationTarget : NSObject
@property (nonatomic) BSProcessHandle targetProcess;
@property (nonatomic) BOOL shouldDismissOnUILock;
@property (nonatomic) BOOL requiresFullscreenPresentation;
@property (nonatomic) NSString scenePersistentIdentifier;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)encodeWithXPCDictionary:;
- (id)targetProcess;
- (id)succinctDescriptionBuilder;
- (id)initWithCoder:;
- (id)scenePersistentIdentifier;
- (void)encodeWithCoder:;
- (id)initWithXPCDictionary:;
- (void).cxx_destruct;
- (id)succinctDescription;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:;
- (id)descriptionWithMultilinePrefix:;
- (id)initWithTargetProcess:;
- (BOOL)shouldDismissOnUILock;
- (void)setShouldDismissOnUILock:;
- (BOOL)requiresFullscreenPresentation;
- (void)setRequiresFullscreenPresentation:;
- (void)setScenePersistentIdentifier:;
+ (BOOL)supportsSecureCoding;
@end
