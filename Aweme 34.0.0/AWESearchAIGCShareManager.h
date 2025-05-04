@interface AWESearchAIGCShareManager : NSObject
@property (nonatomic) NSMutableSet shareDidSelectedSearchIDs;
@property (nonatomic) BOOL isOnSharing;
- (void)showSharePanel:;
- (void)shareBegin;
- (void)shareEnd;
- (BOOL)isOnSharing;
- (BOOL)shareHadSelected:;
- (void)shareDidSelected:;
- (void)shareCancelSelected:;
- (id)allSelectedSearchIDs;
- (void)setIsOnSharing:;
- (id)shareDidSelectedSearchIDs;
- (void)setShareDidSelectedSearchIDs:;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
+ (id)shareInstance;
@end
