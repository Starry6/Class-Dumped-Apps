@interface AWETeenGeneralSearchTracker : NSObject
+ (id)showTypeWithCardType:;
+ (void)trackAuthorCardClickWithModel:enterFrom:showType:clickType:extra:;
+ (void)trackAuthorCardShowWithModel:enterFrom:showType:extra:;
+ (void)trackVideoCardShowWithModel:enterFrom:autoPlayEnable:showType:extra:;
+ (void)trackVideoCardClickWithModel:enterFrom:autoPlayEnable:showType:clickType:extra:;
@end
