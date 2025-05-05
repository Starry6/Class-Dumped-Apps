@interface ETLossDefinition : NSObject
@property (nonatomic) NSString outputName;
@property (nonatomic) NSString inputName;
@property (nonatomic) NSString targetInputName;
@property (nonatomic) NSString lossOutputName;
@property (nonatomic) Q mode;
- (id)lossOutputName;
- (void).cxx_destruct;
- (unsigned long long)mode;
- (id)initWithMode:inputName:targetName:lossOutputName:;
- (id)inputName;
- (id)targetInputName;
- (id)outputName;
- (void)setOutputName:;
+ (id)crossEntropyLossWithInputName:targetInputName:lossOutputName:;
+ (id)L2LossWithInputName:targetInputName:lossOutputName:;
+ (id)BuiltInLoss:;
@end
