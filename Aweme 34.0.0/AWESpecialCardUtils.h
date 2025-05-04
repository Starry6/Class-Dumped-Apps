@interface AWESpecialCardUtils : NSObject
+ (BOOL)isSpecialCard:;
+ (id)mainCardTypeForModel:;
+ (BOOL)getClientSubscribeStatusForCard:;
+ (BOOL)enableSpecialCardLargeFontAdapt;
+ (BOOL)shouldBlockLargeFontAdaptForBiz:;
+ (void)setSubscribe:forCard:;
+ (BOOL)getServerSubscribeStatusForCard:;
@end
