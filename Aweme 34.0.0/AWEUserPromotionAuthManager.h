@interface AWEUserPromotionAuthManager : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (BOOL)isToutiaoInstalled;
+ (void)handleFansPromotionWithModel:completion:;
+ (void)handleToutiaoPromotionWithScheme:completion:;
+ (BOOL)isPromotionSupported:;
+ (id)promotionMsgWithModel:;
+ (BOOL)isAppInstalledWithModel:;
@end
