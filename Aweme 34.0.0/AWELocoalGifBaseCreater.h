@interface AWELocoalGifBaseCreater : NSObject
@property (nonatomic) AWELocoalGifCreaterContext context;
@property (nonatomic) BOOL hasRequestedSticker;
@property (nonatomic) BOOL hasAlreadyCreateLocoalMsg;
- (void)requestGifSteakerWithParams:enableLocoalGifWhenTimeout:completion:;
- (BOOL)hasRequestedSticker;
- (void)setHasRequestedSticker:;
- (BOOL)hasAlreadyCreateLocoalMsg;
- (void)setHasAlreadyCreateLocoalMsg:;
- (id)init;
- (void)setContext:;
- (void).cxx_destruct;
- (id)context;
@end
