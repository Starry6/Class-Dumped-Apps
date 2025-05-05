@interface IESLiveSaaSConfigurableEntranceModel : NSObject
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} initialFrame;
@property (nonatomic) NSDictionary initialData;
@property (nonatomic) IESHYHybridContainerConfig config;
@property (nonatomic) double timeout;
- (void)setInitialData:;
- (id)initialData;
- (id)init;
- (void)setConfig:;
- (void)setTimeout:;
- (void).cxx_destruct;
- (double)timeout;
- (id)config;
- (id)initialFrame;
- (void)setInitialFrame:;
@end
