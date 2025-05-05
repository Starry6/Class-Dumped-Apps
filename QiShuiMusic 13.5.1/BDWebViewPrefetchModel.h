@interface BDWebViewPrefetchModel : NSObject
@property (nonatomic) @ obj;
@property (nonatomic) TTHttpResponse response;
@property (nonatomic) double saveTime;
@property (nonatomic) BOOL isExpired;
@property (nonatomic) @? reqCallBack;
- (void)setReqCallBack:;
- (id)reqCallBack;
- (double)saveTime;
- (void)setSaveTime:;
- (id)obj;
- (BOOL)isExpired;
- (id)response;
- (void).cxx_destruct;
- (void)setResponse:;
- (void)setObj:;
@end
