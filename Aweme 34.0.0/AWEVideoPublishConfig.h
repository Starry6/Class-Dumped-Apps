@interface AWEVideoPublishConfig : NSObject
@property (nonatomic) <AWEStudioAwemeModelProtocol> aweme;
@property (nonatomic) NSString filePath;
@property (nonatomic) NSString enterFrom;
@property (nonatomic) NSString shootWay;
@property (nonatomic) NSString contentType;
@property (nonatomic) NSString publishTitle;
@property (nonatomic) NSArray challenges;
- (void)setEnterFrom:;
- (id)aweme;
- (void)setAweme:;
- (id)enterFrom;
- (void)setShootWay:;
- (void)setPublishTitle:;
- (id)publishTitle;
- (id)shootWay;
- (id)filePath;
- (id)contentType;
- (void)setContentType:;
- (void)setFilePath:;
- (void).cxx_destruct;
- (id)challenges;
- (void)setChallenges:;
@end
