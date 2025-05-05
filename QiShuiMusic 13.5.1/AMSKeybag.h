@interface AMSKeybag : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> dispatchQueue;
@property (nonatomic) AMSFairPlayContext fairPlayContext;
- (id)init;
- (id)dispatchQueue;
- (void)setDispatchQueue:;
- (void).cxx_destruct;
- (unsigned int)fairplayContextWithError:;
- (BOOL)importKeybagWithData:error:;
- (BOOL)importKeybagData:outError:;
- (BOOL)importDiversityBagWithData:error:;
- (id)keybagSyncData:transactionType:outError:;
- (id)keybagSyncDataWithAccountID:transactionType:error:;
- (id)kybsyncData:transationType:error:;
- (void)resetContext;
- (id)fairPlayContext;
- (void)setFairPlayContext:;
+ (id)sharedInstance;
@end
