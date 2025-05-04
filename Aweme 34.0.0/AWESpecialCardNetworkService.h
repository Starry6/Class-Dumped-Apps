@interface AWESpecialCardNetworkService : NSObject
+ (void)commitSpecialCardDislikeWithBusinessID:cardID:mainContainerType:mainCardType:businessExtra:enterFrom:completion:;
+ (void)commitSpecialCardClickWithBusinessID:cardID:mainContainerType:mainCardType:businessExtra:clickEventType:enterFrom:completion:;
+ (void)requestSpecialCardWithBusinessID:businessParams:enterFrom:completion:;
@end
