@interface AWEUIPreviewConfig : NSObject
@property (nonatomic) NSString componentName;
@property (nonatomic) NSString viewName;
@property (nonatomic) NSString styleName;
@property (nonatomic) @? styleView;
@property (nonatomic) UIColor backgroundColor;
- (void)setStyleView:;
- (void)setViewName:;
- (id)styleView;
- (id)componentName;
- (id)viewName;
- (id)backgroundColor;
- (void)setBackgroundColor:;
- (void).cxx_destruct;
- (id)styleName;
- (void)setComponentName:;
- (void)setStyleName:;
@end
