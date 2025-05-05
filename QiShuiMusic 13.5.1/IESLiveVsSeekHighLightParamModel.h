@interface IESLiveVsSeekHighLightParamModel : IESLiveBridgeModel
@property (nonatomic) NSString seekTime;
@property (nonatomic) NSString showToast;
- (void)setShowToast:;
- (id)showToast;
- (void).cxx_destruct;
- (void)setSeekTime:;
- (id)seekTime;
+ (id)modelCustomPropertyMapper;
@end
