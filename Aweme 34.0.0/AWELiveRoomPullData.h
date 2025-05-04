@interface AWELiveRoomPullData : AWEBaseApiModel
@property (nonatomic) AWELiveRoomOptions options;
@property (nonatomic) NSString streamData;
@property (nonatomic) NSInteger kind;
@property (nonatomic) AWELiveRoomExtension extension;
@property (nonatomic) AWELiveRoomPullDataDisplay display;
- (void)setStreamData:;
- (id)initWithPullData:;
- (id)livePullData;
- (void)setKind:;
- (void)setDisplay:;
- (void)setExtension:;
- (void)setOptions:;
- (id)extension;
- (id)options;
- (void).cxx_destruct;
- (int)kind;
- (id)display;
- (id)streamData;
+ (id)JSONKeyPathsByPropertyKey;
@end
