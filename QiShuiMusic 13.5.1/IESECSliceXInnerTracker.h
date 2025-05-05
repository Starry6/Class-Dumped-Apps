@interface IESECSliceXInnerTracker : NSObject
@property (nonatomic) NSDictionary commonParams;
- (id)commonParams;
- (id)initWithCommonParams:;
- (id)innerCommonParams;
- (void)setCommonParams:;
- (void)trackEvent:params:;
- (void).cxx_destruct;
@end
