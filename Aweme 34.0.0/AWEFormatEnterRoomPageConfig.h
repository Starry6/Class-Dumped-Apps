@interface AWEFormatEnterRoomPageConfig : NSObject
@property (nonatomic) BOOL needFloatMode;
@property (nonatomic) NSString pageHeightBias;
@property (nonatomic) BOOL disableSwitchFullscreen;
@property (nonatomic) NSString anchorMessageId;
- (BOOL)needFloatMode;
- (void)setNeedFloatMode:;
- (id)pageHeightBias;
- (void)setPageHeightBias:;
- (BOOL)disableSwitchFullscreen;
- (void)setDisableSwitchFullscreen:;
- (id)anchorMessageId;
- (void)setAnchorMessageId:;
- (id)initWithParams:;
- (void).cxx_destruct;
@end
