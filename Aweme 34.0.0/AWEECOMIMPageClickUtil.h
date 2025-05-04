@interface AWEECOMIMPageClickUtil : NSObject
@property (nonatomic) AWEECOMIMPageTrackUtil pageTrackUtil;
- (id)pageTrackUtil;
- (void)handleClickWithClickParamsModel:clickModel:;
- (id)generateClickTaskWithClickParamsModel:;
- (void)setPageTrackUtil:;
- (void)handleClickWithClickTask:clickModel:;
- (void).cxx_destruct;
@end
