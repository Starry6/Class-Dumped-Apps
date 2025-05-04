@interface AWEGoodsServiceManager : NSObject
@property (nonatomic) BOOL hasShowGoodsServiceTipsAlertView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)_trackGoodsVideoShow:referString:;
- (void)_showGoodsServiceTipsAlertView;
- (void)setGoodsServiceStatus:withUser:referString:logExtraDict:completion:;
- (void)getGoodsServiceStatusWithUser:completion:;
- (BOOL)hasShowGoodsServiceTipsAlertView;
- (void)setHasShowGoodsServiceTipsAlertView:;
- (BOOL)enableShowGoodsVideo;
- (id)generateShareGoodsModelWithGoodsAweme:;
- (void)willDisplayGoodsVideo:referString:;
- (void)showGoodsServiceUnsubscribePopupViewWithUser:referString:logExtraDict:;
- (void)getGoodsServiceStatusCompletion:;
- (void)setGoodsServiceStatus:referString:logExtraDict:completion:;
+ (id)shareManager;
@end
