@interface IDSPhoneSubscriptionSelector : NSObject
@property (nonatomic) IDSXPCDaemonController syncDaemonController;
@property (nonatomic) @? syncDaemonControllerBuilder;
- (id)init;
- (id)syncDaemonController;
- (BOOL)enableTemporaryPhoneAlias:withError:;
- (void)disableTemporaryPhoneAlias:withCompletion:;
- (void)_performSyncAction:;
- (BOOL)removeTemporaryPhoneAlias:withError:;
- (id)selectSubscription:withError:;
- (void)unselectSubscription:withCompletion:;
- (void).cxx_destruct;
- (void)enableTemporaryPhoneAlias:withCompletion:;
- (void)requestSelectedSubscriptionsWithCompletion:;
- (void)setSyncDaemonControllerBuilder:;
- (void)removeTemporaryPhoneAlias:withCompletion:;
- (void)setSyncDaemonController:;
- (id)unselectedTemporaryPhoneAliasesWithError:;
- (void)setSelectedSubscriptions:withCompletion:;
- (id)setSelectedSubscriptions:withError:;
- (id)unselectSubscription:withError:;
- (void)selectSubscription:withCompletion:;
- (id)selectedSubscriptionsWithError:;
- (id)initWithSyncDaemonControllerBuilder:;
- (BOOL)disableTemporaryPhoneAlias:withError:;
- (void)requestUnselectedTemporaryPhoneAliasesWithError:;
- (id)syncDaemonControllerBuilder;
@end
