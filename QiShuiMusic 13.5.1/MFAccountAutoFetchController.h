@interface MFAccountAutoFetchController : NSObject
- (void)fetchNow:withAccount:;
- (void)fetchNow:withMailboxes:fromAccount:completion:;
@end
