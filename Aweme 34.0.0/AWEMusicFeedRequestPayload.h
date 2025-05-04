@interface AWEMusicFeedRequestPayload : NSObject
@property (nonatomic) AWEMusicAwemeListResponse response;
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
