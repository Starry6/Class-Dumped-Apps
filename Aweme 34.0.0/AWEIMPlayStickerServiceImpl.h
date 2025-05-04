@interface AWEIMPlayStickerServiceImpl : NSObject
@property (nonatomic) AWEIMPlayStickerDataSource dataSource;
@property (nonatomic) AWEIMPlayStickerResponseModel stickerModel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didFinishLogoutWithUid:;
- (id)stickerModel;
- (BOOL)isMango25PlaySticker:extra:;
- (void)fetchStickerListWithType:isPrivateChat:completion:;
- (void)injectIMModelWithSendAction:;
- (void)injectIMModelWithSendAction:routerParams:enterFrom:;
- (void)injectIMModelWithAigcAsync:conversation:;
- (id)init;
- (void).cxx_destruct;
- (void)setDataSource:;
- (id)dataSource;
+ (BOOL)stickerCameraDisable:;
+ (void)stickerCameraRouter:;
+ (id)sharedInstance;
@end
