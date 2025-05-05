@interface BDXBridgePlayerChangePlaySourcePlaySource : BDXBridgeModel
@property (nonatomic) NSString queue_id;
@property (nonatomic) NSString queue_name;
@property (nonatomic) BDXBridgePlayerChangePlaySourceStartPlayable start_playable;
@property (nonatomic) BDXBridgePlayerChangePlaySourceLoadedQueue loaded_queue;
@property (nonatomic) q queue_type;
- (id)loaded_queue;
- (id)queue_id;
- (id)queue_name;
- (long long)queue_type;
- (void)setLoaded_queue:;
- (void)setQueue_id:;
- (void)setQueue_name:;
- (void)setQueue_type:;
- (void)setStart_playable:;
- (id)start_playable;
- (void).cxx_destruct;
+ (id)queue_typeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
