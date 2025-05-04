@interface AWEAdFeedBrowseRecorder : HTSService
@property (nonatomic) NSMutableSet pendingCreativeIDs;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)onServiceInit;
- (void)onAppDidEnterBackground;
- (id)pendingCreativeIDs;
- (id)discardCreativeIDListString;
- (void)setPendingCreativeIDs:;
- (void)dealloc;
- (void).cxx_destruct;
@end
