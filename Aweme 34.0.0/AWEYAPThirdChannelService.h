@interface AWEYAPThirdChannelService : HTSService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)processAuthResult:standbyCallback:;
- (void)setWxUniversalLink:;
- (void)registerAuthAliYapScheme:;
- (BOOL)canAliYapProcessURL:;
- (void)authAliYap:callback:;
- (void)processOrderWithYapmentResult:standbyCallback:;
- (void)yapOrder:fromScheme:callback:;
@end
