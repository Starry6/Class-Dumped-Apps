@interface AWEECommerceQualityGoodsAPIFeedbackEvent : NSObject
@property (nonatomic) NSString APIPath;
@property (nonatomic) AWEBaseApiModel<AWEECommerceQualityResponseModelLostRequiredKeys> responseModel;
- (id)APIPath;
- (void)setAPIPath:;
- (void).cxx_destruct;
- (id)responseModel;
- (void)setResponseModel:;
@end
