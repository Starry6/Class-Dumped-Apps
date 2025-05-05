@interface IESECLiveEditCartRequest : IESECLiveAPIBaseRequest
@property (nonatomic) NSString apiPath;
@property (nonatomic) NSDictionary requestDic;
- (id)buildParams;
- (id)requestDic;
- (void)setRequestDic:;
- (void).cxx_destruct;
@end
