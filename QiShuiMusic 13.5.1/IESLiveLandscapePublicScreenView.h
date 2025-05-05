@interface IESLiveLandscapePublicScreenView : IESLivePublicScreenView
@property (nonatomic) double currentWidth;
- (void)setCurrentWidth:;
- (void)updatePublicScreenWidth:;
- (id)intrinsicContentSize;
- (double)currentWidth;
@end
