@interface VCDefaultNetworkSpeedPredictor : NSObject
@property (nonatomic) ^{INetworkSpeedPredictor=^^?} predictor;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (float)getAverageDownLoadSpeed:speedType:trigger:;
- (id)getDownloadSpeed:;
- (float)getLastPredictConfidence;
- (float)getPredictSpeed:;
- (id)initWithAlgoType:;
- (void)update:streamInfo:;
- (void)dealloc;
- (id)predictor;
- (void)setPredictor:;
@end
