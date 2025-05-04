@interface AWEAdOrderCenterPopWindowControlModel : NSObject
@property (nonatomic) NSString uid;
@property (nonatomic) AWEAdOrderCenterPopTipsControlModel popTipsInfo;
@property (nonatomic) AWEAdOrderCenterPopViewControlModel popViewInfo;
- (id)popViewInfo;
- (void)setPopViewInfo:;
- (id)popTipsInfo;
- (void)setPopTipsInfo:;
- (void)setUid:;
- (id)uid;
- (void).cxx_destruct;
@end
