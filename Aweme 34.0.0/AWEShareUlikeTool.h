@interface AWEShareUlikeTool : HTSService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didFinishLogin;
- (BOOL)supportSyncAwemeToUlike:user:;
- (void)fetchUlikeAuthAccount;
- (id)init;
- (void)dealloc;
+ (void)trackClickPublishToUlike:enterFrom:;
+ (void)trackClickToUlike:enterFrom:;
+ (BOOL)supportSyncUlike;
@end
