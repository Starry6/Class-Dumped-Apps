@interface BDASifXBridgeAdInfoMethodResultModel : BDXBridgeModel
@property (nonatomic) NSNumber code;
@property (nonatomic) NSNumber cid;
@property (nonatomic) NSString ad_id;
@property (nonatomic) NSString group_id;
@property (nonatomic) NSString log_extra;
@property (nonatomic) NSString skan_parameters;
@property (nonatomic) NSArray track_url_list;
- (id)skan_parameters;
- (id)ad_id;
- (id)log_extra;
- (void)setAd_id:;
- (void)setGroup_id:;
- (void)setLog_extra:;
- (void)setSkan_parameters:;
- (void)setTrack_url_list:;
- (id)track_url_list;
- (id)code;
- (id)cid;
- (void).cxx_destruct;
- (void)setCode:;
- (id)group_id;
- (void)setCid:;
+ (id)JSONKeyPathsByPropertyKey;
@end
