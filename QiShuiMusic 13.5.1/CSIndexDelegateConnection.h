@interface CSIndexDelegateConnection : CSIndexConnection
- (void)handleError:;
- (id)indexForID:;
- (void)handleReply:;
- (id)indexForProtectionClass:;
+ (id)sharedConnectionForUser:;
@end
