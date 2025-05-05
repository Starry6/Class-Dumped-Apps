@interface IESLiveSaasMatchSpliceShareBaseView : UIView
@property (nonatomic) IESLiveImageView qrImageView;
- (void)addQrImageView:;
- (void)addQRCodeImage:;
- (void)setQrImageView:;
- (void)beginDrawWithHandler:;
- (void)endDrawWithHandler:;
- (id)qrImageView;
- (void).cxx_destruct;
+ (id)createPainter;
@end
