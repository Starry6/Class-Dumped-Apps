@interface BDASifXBridgeSendThirdTrackMethodParamModel : BDXBridgeModel
@property (nonatomic) NSString track_label;
@property (nonatomic) NSString creative_id;
@property (nonatomic) NSString log_extra;
@property (nonatomic) NSArray track_url_list;
- (void)setCreative_id:;
- (void)setTrack_label:;
- (id)creative_id;
- (id)log_extra;
- (void)setLog_extra:;
- (void)setTrack_url_list:;
- (id)track_label;
- (id)track_url_list;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
