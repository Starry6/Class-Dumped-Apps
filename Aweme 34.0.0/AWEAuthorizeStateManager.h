@interface AWEAuthorizeStateManager : NSObject
@property (nonatomic) BOOL enableAccountAuthorize;
@property (nonatomic) BOOL unbind;
@property (nonatomic) BOOL importFans;
@property (nonatomic) BOOL enableFollowChainAuthorize;
@property (nonatomic) NSString userID;
@property (nonatomic) BFTaskCompletionSource authorizeTask;
- (void)setEnableAccountAuthorize:;
- (void)setAuthorizeTask:;
- (BOOL)enableAccountAuthorize;
- (BOOL)enableFollowChainAuthorize;
- (BOOL)importFans;
- (void)setUnbind:;
- (void)setImportFans:;
- (void)setEnableFollowChainAuthorize:;
- (id)authorizeTask;
- (id)userID;
- (id)scope;
- (BOOL)unbind;
- (void).cxx_destruct;
- (void)setUserID:;
+ (BOOL)needBindPhone;
@end
