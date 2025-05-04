@interface AWEBackgroundPlayPIPConfig : NSObject
@property (nonatomic) AWEAwemeModel awemeModel;
@property (nonatomic) NSDictionary logExtraParams;
- (id)awemeModel;
- (void)setAwemeModel:;
- (BOOL)iPhoneGlobalPiPSwitchDefaultState;
- (void)switchDidChange:;
- (id)configCellModelWithAwemeModel:;
- (id)logExtraParams;
- (id)cellModelWithAwemeModel:;
- (void)setLogExtraParams:;
- (void).cxx_destruct;
+ (BOOL)shouldShowBGPlayPIPSwitchWithModel:;
@end
