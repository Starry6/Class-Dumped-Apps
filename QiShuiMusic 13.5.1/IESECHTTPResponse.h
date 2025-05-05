@interface IESECHTTPResponse : NSObject
@property (nonatomic) TTHttpResponse tt_HTTPResponse;
@property (nonatomic) @ JSONObj;
@property (nonatomic) NSError error;
- (id)JSONObj;
- (id)tt_HTTPResponse;
- (void)setJSONObj:;
- (void)setTt_HTTPResponse:;
- (void)setError:;
- (id)error;
- (void).cxx_destruct;
@end
