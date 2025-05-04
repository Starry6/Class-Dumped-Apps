@interface AWEIMGameInviteMessageSchemeTransferCoordinatorDefalut : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)transferWithScheme:scheme:gameStationScheme:shouldCheckAppExist:shouldOpenGameStation:completion:;
- (void)openExternalUrlWithURL:completion:;
- (void)openExternalSchemeWithGameStationScheme:scheme:shouldCheckAppExist:shouldOpenGameStation:url:completion:;
- (void)adjustSchemeIfNeededWithMessage:completion:;
- (void)transferWithMessage:scheme:completion:;
@end
