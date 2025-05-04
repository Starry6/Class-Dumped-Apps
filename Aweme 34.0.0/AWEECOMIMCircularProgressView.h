@interface AWEECOMIMCircularProgressView : UIView
@property (nonatomic) double progress;
@property (nonatomic) UIColor progerssColor;
@property (nonatomic) UIColor progerssBackgroundColor;
@property (nonatomic) double progressWidth;
- (void)setProgerssColor:;
- (void)setProgerssBackgroundColor:;
- (id)progerssBackgroundColor;
- (id)progerssColor;
- (id)init;
- (void)drawRect:;
- (double)progress;
- (void).cxx_destruct;
- (void)setProgress:;
- (double)progressWidth;
- (void)setProgressWidth:;
@end
