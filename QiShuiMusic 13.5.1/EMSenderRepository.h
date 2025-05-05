@interface EMSenderRepository : EMRepository
- (id)performQuery:withObserver:;
- (void)refreshQueryWithObserver:;
- (id)simpleAddressesForRelevantSenders:;
+ (id)remoteInterface;
@end
