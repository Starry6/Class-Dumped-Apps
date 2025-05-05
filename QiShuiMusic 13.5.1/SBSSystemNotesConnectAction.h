@interface SBSSystemNotesConnectAction : BSAction
@property (nonatomic) Q connectionSource;
- (id)initWithSource:responder:;
- (unsigned long long)connectionSource;
@end
