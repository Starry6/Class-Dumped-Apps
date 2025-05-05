@interface CSJSKOverlayTrackCenter : NSObject
@property (nonatomic) CSJAdInfoViewModel infoModel;
- (id)infoModel;
- (void)setInfoModel:;
- (void)storeOverlayDidClick;
- (void)storeOverlayDidClickGet;
- (void)storeOverlayDidFailToLoadWithError:;
- (void)storeOverlayDidFinishPresentation;
- (void).cxx_destruct;
- (id)copyWithZone:;
+ (id)allocWithZone:;
+ (id)shareInstance;
@end
