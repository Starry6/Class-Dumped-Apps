@interface AWEIMShareGoodsMessageViewModel : AWEIMMessageViewModel
@property (nonatomic) NSDictionary extraTrackerParams;
- (void)setExtraTrackerParams:;
- (id)extraTrackerParams;
- (void)willDisplayByMessageVisibleLifeCycle;
- (id)ecomTrackParamsWithMsg:;
- (void)trackEcomGoodsMsgShow;
- (void)updateEcomGoodsMsgShowExtraParams:;
- (void).cxx_destruct;
@end
