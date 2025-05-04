@interface AWEFeedDetailBarActionBaseView : UIView
@property (nonatomic) NSString enterFrom;
@property (nonatomic) NSString referString;
@property (nonatomic) AWEAwemeModel awemeModel;
- (id)awemeModel;
- (void)setAwemeModel:;
- (id)referString;
- (void)setEnterFrom:;
- (void)setReferString:;
- (id)enterFrom;
- (void)updateAwemeModel:;
- (void).cxx_destruct;
- (double)viewHeight;
- (double)viewWidth;
@end
