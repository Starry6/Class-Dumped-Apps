@interface BWObjectLifetimeTracker : NSObject
- (void)dealloc;
+ (id)trackerWithDeallocHandler:;
+ (void)trackAttachmentBearer:deallocHandler:;
@end
