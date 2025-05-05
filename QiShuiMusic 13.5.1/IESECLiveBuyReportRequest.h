@interface IESECLiveBuyReportRequest : IESECLiveAPIBaseRequest
@property (nonatomic) NSString pIDs;
@property (nonatomic) NSString eventType;
- (id)buildParams;
- (id)pIDs;
- (void)setPIDs:;
- (id)eventType;
- (void)setEventType:;
- (void).cxx_destruct;
@end
