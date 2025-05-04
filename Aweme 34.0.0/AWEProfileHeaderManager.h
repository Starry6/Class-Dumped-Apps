@interface AWEProfileHeaderManager : HTSService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (BOOL)shouldUseCoverDominantColor;
+ (id)headerBackgroundColorWithHexColor:;
+ (id)defaultHeaderBgColor;
+ (BOOL)isCompanyHeaderWithProfileType:user:;
+ (BOOL)shouldShowRecommendCardListWithProfileType:user:isCurrentUser:;
@end
