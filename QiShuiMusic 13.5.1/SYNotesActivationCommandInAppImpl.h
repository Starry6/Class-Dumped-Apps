@interface SYNotesActivationCommandInAppImpl : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (void)activateWithMetaActivity:completion:;
+ (void)activateWithDomainIdentifier:noteIdentifier:completion:;
+ (void)_activateWithActivity:completion:;
+ (id)fetchPresenterViewControllerInvocationBlock;
+ (void)setFetchPresenterViewControllerInvocationBlock:;
+ (void)_launchNotesWithUserActivity:completion:;
@end
