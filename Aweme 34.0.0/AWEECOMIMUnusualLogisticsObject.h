@interface AWEECOMIMUnusualLogisticsObject : MTLModel
@property (nonatomic) NSString deliver_id;
@property (nonatomic) NSString logistics_company;
@property (nonatomic) NSString logistics_company_name;
@property (nonatomic) NSString logistics_num;
@property (nonatomic) AWEECOMIMUnusualLogisticsTrack latest_track;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)logistics_company;
- (void)setLogistics_company:;
- (id)logistics_num;
- (void)setLogistics_num:;
- (id)logistics_company_name;
- (id)latest_track;
- (id)deliver_id;
- (void)setDeliver_id:;
- (void)setLogistics_company_name:;
- (void)setLatest_track:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
