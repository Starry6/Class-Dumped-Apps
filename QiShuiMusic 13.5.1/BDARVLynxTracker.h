@interface BDARVLynxTracker : NSObject
@property (nonatomic) BDARVSourceModel sourceModel;
@property (nonatomic) @? commonParams;
@property (nonatomic) @? payloadData;
@property (nonatomic) NSArray models;
@property (nonatomic) q adId;
- (id)commonParams;
- (void)eventData:;
- (void)eventData:adExtraData:;
- (void)eventDataV3:;
- (BOOL)needSpecifyAdDataWithLabel:;
- (void)setCommonParams:;
- (void)setModels:;
- (id)models;
- (void)setPayloadData:;
- (void).cxx_destruct;
- (id)sourceModel;
- (id)payloadData;
- (void)setSourceModel:;
- (long long)adId;
- (void)setAdId:;
@end
