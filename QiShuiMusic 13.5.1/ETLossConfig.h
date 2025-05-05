@interface ETLossConfig : NSObject
@property (nonatomic) Q mode;
@property (nonatomic) NSString loss_name;
@property (nonatomic) NSString output_name;
@property (nonatomic) NSString label_name;
@property (nonatomic) NSArray label_shape;
@property (nonatomic) NSString custom_network_path;
- (void).cxx_destruct;
- (unsigned long long)mode;
- (void)setMode:;
- (id)loss_name;
- (void)setLoss_name:;
- (id)output_name;
- (void)setOutput_name:;
- (id)label_name;
- (void)setLabel_name:;
- (id)label_shape;
- (void)setLabel_shape:;
- (id)custom_network_path;
- (void)setCustom_network_path:;
+ (id)softmaxCrossEntropyLoss;
+ (id)L2Loss;
@end
