@interface AWEPadSplitScreenContainerView : UIView
@property (nonatomic) UIView container;
- (id)aAWEPadModuleAdapter;
- (id)aAWEPadSplitScreenAdapter;
- (void)setContainer:;
- (id)container;
- (BOOL)pointInside:withEvent:;
- (void)setFrame:;
- (void).cxx_destruct;
+ (Class)aAWEPadModuleAdapterClass;
+ (Class)aAWEPadSplitScreenAdapterClass;
@end
