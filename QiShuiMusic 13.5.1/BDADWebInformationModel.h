@interface BDADWebInformationModel : NSObject
@property (nonatomic) NSMutableArray pageInfos;
@property (nonatomic) NSString adId;
@property (nonatomic) NSString logextra;
@property (nonatomic) NSString timestamp;
- (id)pageInfoForUrl:;
- (void)addRequestHeaderFields:forUrl:;
- (void)addResponseHTMLString:forUrl:;
- (id)logextra;
- (id)pageInfos;
- (void)setLogextra:;
- (void)setPageInfos:;
- (id)webPageInfos;
- (id)init;
- (void)setTimestamp:;
- (void).cxx_destruct;
- (id)timestamp;
- (id)adId;
- (void)setAdId:;
@end
