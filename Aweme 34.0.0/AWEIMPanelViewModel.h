@interface AWEIMPanelViewModel : NSObject
@property (nonatomic) # associateViewClass;
@property (nonatomic) UIColor backgroundColor;
@property (nonatomic) double contentHeight;
@property (nonatomic) {UIEdgeInsets=dddd} contentInsets;
@property (nonatomic) double height;
- (void)setAssociateViewClass:;
- (Class)associateViewClass;
- (id)init;
- (void)setContentInsets:;
- (id)contentInsets;
- (double)contentHeight;
- (id)backgroundColor;
- (void)setBackgroundColor:;
- (void).cxx_destruct;
- (void)setContentHeight:;
- (double)height;
@end
