@interface AWENearbyHotSpotFeedInitialContext : NSObject
@property (nonatomic) NSString enterFrom;
@property (nonatomic) NSString referString;
@property (nonatomic) NSString initialAwemeID;
@property (nonatomic) NSDictionary logExtraDict;
@property (nonatomic) Q sceneType;
@property (nonatomic) Q bizType;
- (void)setLogExtraDict:;
- (id)referString;
- (void)setEnterFrom:;
- (void)setReferString:;
- (id)logExtraDict;
- (id)enterFrom;
- (unsigned long long)bizType;
- (void)setBizType:;
- (id)initialAwemeID;
- (void)setInitialAwemeID:;
- (void).cxx_destruct;
- (unsigned long long)sceneType;
- (void)setSceneType:;
@end
