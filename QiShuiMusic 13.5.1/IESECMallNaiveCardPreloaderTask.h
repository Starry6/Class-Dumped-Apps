@interface IESECMallNaiveCardPreloaderTask : NSObject
@property (nonatomic) Q state;
@property (nonatomic) IESECListKitCardPreloaderModel model;
- (void)startWithCompleteBlock:;
- (id)model;
- (void)setModel:;
- (void)setState:;
- (unsigned long long)state;
- (void).cxx_destruct;
@end
