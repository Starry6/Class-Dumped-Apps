@interface LSIParamRecordHelper : NSObject
@property (nonatomic) NSLock layerIdMapLock;
@property (nonatomic) NSDictionary layer_id_map;
@property (nonatomic) BOOL enableVideoInfoStatistic;
- (BOOL)enableVideoInfoStatistic;
- (id)layerIdMapLock;
- (id)layer_id_map;
- (void)setEnableVideoInfoStatistic:;
- (void)setLayerIdMap:;
- (void)setLayerIdMapLock:;
- (void)setLayer_id_map:;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
