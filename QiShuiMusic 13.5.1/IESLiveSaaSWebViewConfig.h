@interface IESLiveSaaSWebViewConfig : NSObject
@property (nonatomic) double width;
@property (nonatomic) double height;
@property (nonatomic) double radius;
@property (nonatomic) double margin;
@property (nonatomic) BOOL showLoading;
@property (nonatomic) BOOL forbidAnimation;
@property (nonatomic) UIColor backgroundColor;
@property (nonatomic) BOOL shouldUseLandscapeSize;
- (BOOL)forbidAnimation;
- (void)setShowLoading:;
- (void)setForbidAnimation:;
- (void)setShouldUseLandscapeSize:;
- (BOOL)shouldUseLandscapeSize;
- (void)setRadius:;
- (id)init;
- (void)setBackgroundColor:;
- (id)backgroundColor;
- (double)margin;
- (double)radius;
- (void)setWidth:;
- (void)setMargin:;
- (double)height;
- (double)width;
- (void)setHeight:;
- (void).cxx_destruct;
- (BOOL)showLoading;
@end
