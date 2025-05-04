@interface AWEFeedLiveTabRevisitDataCenter : NSObject
@property (nonatomic) AWEFeedLiveTabDataApi api;
@property (nonatomic) BOOL isRequesting;
@property (nonatomic) NSString enterFrom;
@property (nonatomic) NSString enterMethod;
@property (nonatomic) double requestTimeStamp;
@property (nonatomic) FeedLiveTabData requestData;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setEnterFrom:;
- (void)setEnterMethod:;
- (id)enterMethod;
- (id)enterFrom;
- (void)didSetAttachingDIContext;
- (id)initWithEnterFrom:enterMethod:;
- (BOOL)isRequesting;
- (void)setIsRequesting:;
- (void)requestLiveTabFollowUpVisitWithCompletion:;
- (void)setRequestTimeStamp:;
- (void)requestRevisitInfoWithType:params:completion:;
- (id)requestData;
- (void).cxx_destruct;
- (void)setRequestData:;
- (id)api;
- (double)requestTimeStamp;
- (void)setApi:;
@end
