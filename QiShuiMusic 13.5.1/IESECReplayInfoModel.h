@interface IESECReplayInfoModel : MTLModel
@property (nonatomic) NSString replayUrl;
@property (nonatomic) NSString replayText;
@property (nonatomic) IESECURLModel replayIcon;
@property (nonatomic) BOOL hitNewReplayStyle;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)hitNewReplayStyle;
- (id)replayIcon;
- (id)replayText;
- (id)replayUrl;
- (void)setHitNewReplayStyle:;
- (void)setReplayIcon:;
- (void)setReplayText:;
- (void)setReplayUrl:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
