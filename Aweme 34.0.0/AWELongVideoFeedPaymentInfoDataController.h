@interface AWELongVideoFeedPaymentInfoDataController : NSObject
@property (nonatomic) AWELongVideoFeedPaymentInfoRequestModel requestModel;
@property (nonatomic) BOOL isRequesting;
- (BOOL)isRequesting;
- (void)setIsRequesting:;
- (void)setRequestModel:;
- (void)fetchPaymentInfoWithCompletion:;
- (void)fetchAwemeModelWithCompletion:;
- (id)requestModel;
- (void).cxx_destruct;
@end
