@interface AWEECOMIMInteractiveSystemMsgModel : AWEECOMIMBaseMsgModel
@property (nonatomic) NSAttributedString contentTextDisplay;
@property (nonatomic) YYTextLayout contentTextLayout;
@property (nonatomic) @? dialNumber;
@property (nonatomic) BOOL hasBackground;
- (void)setHasBackground:;
- (id)msgDisplayParams;
- (id)contentTextLayout;
- (void)setDialNumber:;
- (id)dialNumber;
- (void)fetchShopTelephoneWithParams:path:completion:;
- (void)setContentTextDisplay:;
- (id)contentTextDisplay;
- (void)setContentTextLayout:;
- (BOOL)hasBackground;
- (void).cxx_destruct;
- (id)initWithMessage:;
+ (Class)cellClass;
@end
