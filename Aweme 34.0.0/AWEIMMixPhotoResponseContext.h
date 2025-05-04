@interface AWEIMMixPhotoResponseContext : NSObject
@property (nonatomic) q reqActionType;
@property (nonatomic) double requestTime;
@property (nonatomic) BOOL success;
@property (nonatomic) q status;
@property (nonatomic) NSString message;
@property (nonatomic) BOOL shouldDismissShootPage;
@property (nonatomic) NSError error;
@property (nonatomic) AWEIMMixPhotoResponseModel response;
- (long long)reqActionType;
- (BOOL)shouldDismissShootPage;
- (void)setReqActionType:;
- (double)requestTime;
- (id)message;
- (void)setRequestTime:;
- (void)setError:;
- (id)response;
- (void).cxx_destruct;
- (id)error;
- (void)setResponse:;
- (long long)status;
- (BOOL)success;
@end
