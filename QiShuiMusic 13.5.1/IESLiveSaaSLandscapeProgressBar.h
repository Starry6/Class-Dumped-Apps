@interface IESLiveSaaSLandscapeProgressBar : UIView
@property (nonatomic) double progress;
- (id)init;
- (void)drawRect:;
- (void)setProgress:;
- (double)progress;
@end
