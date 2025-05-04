@interface AWEPOIGoodsDetailCollectObject : NSObject
@property (nonatomic) BOOL isCollectedRequestOnAir;
- (BOOL)isCollectedRequestOnAir;
- (void)setIsCollectedRequestOnAir:;
- (void)collectGrouponDetailWithGrouponID:collect:needHintToast:extraReqParams:favoriteLifeInfo:loginResult:completion:;
@end
