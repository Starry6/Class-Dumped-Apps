@interface ABUNetworkV4Request : ABUNetworkRequest
@property (nonatomic) double reqStartTs;
- (void)_handleResponseWithBaseRequest:complete:;
- (double)reqStartTs;
- (void)requestWithParameter:andCypher:complete:;
- (void)setReqStartTs:;
- (id)v4CypherRequestParameter:;
@end
