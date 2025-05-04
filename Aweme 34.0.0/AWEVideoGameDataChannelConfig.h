@interface AWEVideoGameDataChannelConfig : AWEBaseApiModel
@property (nonatomic) NSString gumID;
@property (nonatomic) NSString gameID;
@property (nonatomic) q videoStayLimit;
- (long long)videoStayLimit;
- (id)gameID;
- (void)setGameID:;
- (id)gumID;
- (void)setGumID:;
- (void)setVideoStayLimit:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
