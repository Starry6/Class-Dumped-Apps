@interface AWEECLivePromotionCardProviderServiceImpl : NSObject
@property (nonatomic) <IESECLivePromotionCardProviderService> providerService;
@property (nonatomic) <IESECLivePromotionCardProviderBizDelegate> fakeDelegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithPromotionCardProviderService:andFakeDelegate:;
- (id)providerService;
- (id)getPromotionCardView;
- (void)setProviderService:;
- (id)fakeDelegate;
- (void)setFakeDelegate:;
- (void).cxx_destruct;
+ (id)cardData:delegate:;
@end
