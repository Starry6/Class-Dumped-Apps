@interface IESIMALMVideoModel : NSObject
@property (nonatomic) NSString videoID;
@property (nonatomic) NSString urlKey;
@property (nonatomic) NSArray urlList;
@property (nonatomic) Q playerType;
@property (nonatomic) NSString dashModelString;
@property (nonatomic) NSString fileCs;
@property (nonatomic) NSString pToken;
@property (nonatomic) NSString playAuth;
@property (nonatomic) NSArray hosts;
@property (nonatomic) double width;
@property (nonatomic) double height;
@property (nonatomic) BOOL isH265;
- (id)dashModelString;
- (id)urlList;
- (id)fileCs;
- (BOOL)isH265;
- (id)pToken;
- (id)playAuth;
- (void)setDashModelString:;
- (void)setFileCs:;
- (void)setIsH265:;
- (void)setPToken:;
- (void)setPlayAuth:;
- (void)setPlayerType:;
- (void)setUrlList:;
- (void)setWidth:;
- (id)hosts;
- (double)height;
- (double)width;
- (void)setHeight:;
- (void).cxx_destruct;
- (void)setHosts:;
- (unsigned long long)playerType;
- (id)videoID;
- (void)setVideoID:;
- (id)urlKey;
- (void)setUrlKey:;
@end
