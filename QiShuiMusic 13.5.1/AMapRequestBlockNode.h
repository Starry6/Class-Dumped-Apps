@interface AMapRequestBlockNode : NSObject
@property (nonatomic) <AMapSearchRequestCacheProtocol> request;
@property (nonatomic) AMapSearchAPI searchAPI;
- (id)searchAPI;
- (void)setSearchAPI:;
- (id)request;
- (void).cxx_destruct;
- (void)setRequest:;
@end
