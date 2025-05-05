@interface BDXBridgePlayerGetPlayerStatePlayingPlaySource : BDXBridgeModel
@property (nonatomic) NSString queue_type;
@property (nonatomic) NSString queue_id;
@property (nonatomic) NSString queue_name;
@property (nonatomic) BDXBridgePlayerGetPlayerStateStartPlayable start_playable;
- (id)queue_id;
- (id)queue_name;
- (id)queue_type;
- (void)setQueue_id:;
- (void)setQueue_name:;
- (void)setQueue_type:;
- (void)setStart_playable:;
- (id)start_playable;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
