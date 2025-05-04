@interface AWESearchEpidemicLiveRoomModel : AWEBaseApiModel
@property (nonatomic) NSString roomInfo;
@property (nonatomic) NSString liveURL;
@property (nonatomic) NSString liveStatusURL;
@property (nonatomic) q liveType;
- (id)roomInfo;
- (void)setLiveType:;
- (long long)liveType;
- (void)setRoomInfo:;
- (id)liveURL;
- (void)setLiveURL:;
- (id)liveStatusURL;
- (void)setLiveStatusURL:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
