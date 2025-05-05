@interface IESECWinInsertCardsController : NSObject
+ (void)configWithInsertCardsResponse:selectedModel:currentIndex:;
+ (void)requestInsertCardsWithContext:productId:cardType:insertParams:filters:completion:;
@end
