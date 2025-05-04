@interface AWENearbyPageScrollConfig : NSObject
@property (nonatomic) q containerStickyHeight;
@property (nonatomic) BOOL canContainerScroll;
@property (nonatomic) BOOL canContentScroll;
- (void)setCanContainerScroll:;
- (void)setCanContentScroll:;
- (long long)containerStickyHeight;
- (void)setContainerStickyHeight:;
- (BOOL)canContainerScroll;
- (BOOL)canContentScroll;
@end
