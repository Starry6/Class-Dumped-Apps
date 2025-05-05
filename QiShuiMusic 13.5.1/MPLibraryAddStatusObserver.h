@interface MPLibraryAddStatusObserver : NSObject
@property (nonatomic) ICUserIdentity userIdentity;
@property (nonatomic) q currentStatus;
@property (nonatomic) @? statusBlock;
@property (nonatomic) {MPLibraryAddStatusObserverConfiguration=BBBBB} configuration;
@property (nonatomic) MPModelObject identifyingModelObject;
- (id)initWithUserIdentity:;
- (long long)_calculateCurrentStatus;
- (id)init;
- (void)dealloc;
- (void)_allowsExplicitContentDidChangeNotification:;
- (void)_subscriptionStatusDidChangeNotification:;
- (void)_transientStateDidChangeNotification:;
- (long long)currentStatus;
- (void)_updateCurrentStatus;
- (id)identifyingModelObject;
- (void)configureWithModelObject:;
- (void)setConfiguration:identifyingModelObject:;
- (void)_updateInProgressDidChangeNotification:;
- (id)userIdentity;
- (void)_cloudLibraryEnabledDidChangeNotification:;
- (id)configuration;
- (void).cxx_destruct;
- (void)setStatusBlock:;
- (id)statusBlock;
@end
