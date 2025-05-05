@interface VCPVideoCNNBackbone : NSObject
@property (nonatomic) ^f outputBeforeFc;
@property (nonatomic) ^f outputBeforeSpatiialPooling;
@property (nonatomic) ^f outputRes4;
@property (nonatomic) ^f outputBeforeTemporalPooling;
- (id)initWithConfig:;
- (void).cxx_destruct;
- (int)inference:;
- (id)outputBeforeFc;
- (id)outputBeforeSpatiialPooling;
- (id)outputRes4;
- (id)outputBeforeTemporalPooling;
+ (id)sharedModel:outputNames:properties:;
@end
