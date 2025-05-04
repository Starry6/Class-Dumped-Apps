@interface AWETeenPureModePageContext : AWEPageContext
@property (nonatomic) q playProgressThreshold;
@property (nonatomic) AWEAwemeModel model;
@property (nonatomic) NSString referString;
@property (nonatomic) NSString enterFrom;
@property (nonatomic) NSDictionary logExtraDict;
@property (nonatomic) q vcType;
- (void)setLogExtraDict:;
- (id)referString;
- (void)setEnterFrom:;
- (void)setReferString:;
- (id)logExtraDict;
- (id)enterFrom;
- (long long)vcType;
- (long long)playProgressThreshold;
- (void)setVcType:;
- (void)setPlayProgressThreshold:;
- (BOOL)canShowSpeedControl;
- (void)setModel:;
- (id)init;
- (id)model;
- (void).cxx_destruct;
- (BOOL)canShowProgress;
@end
