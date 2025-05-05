@interface CAScrollLayer : CALayer
@property (nonatomic) NSString scrollMode;
- (void)scrollToPoint:;
- (void)scrollToRect:;
- (void)_scrollPoint:fromLayer:;
- (void)_scrollRect:fromLayer:;
- (id)_visibleRectOfLayer:;
- (id)scrollMode;
- (void)setScrollMode:;
+ (id)defaultValueForKey:;
+ (BOOL)CA_automaticallyNotifiesObservers:;
@end
