@interface AWETrendFeedRequestPayload : NSObject
@property (nonatomic) AWEDetailAwemeResponse response;
@property (nonatomic) BOOL isFromCache;
@property (nonatomic) NSError error;
- (BOOL)isFromCache;
- (void)setError:;
- (id)response;
- (void)setIsFromCache:;
- (void).cxx_destruct;
- (id)error;
- (void)setResponse:;
@end
