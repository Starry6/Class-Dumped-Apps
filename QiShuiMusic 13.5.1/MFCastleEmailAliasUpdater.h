@interface MFCastleEmailAliasUpdater : NSObject
- (void).cxx_destruct;
- (id)initWithAccountID:aliasSupport:;
- (void)getEmailAddressAndAliasesWithLastSyncDate:entityTag:handler:;
@end
