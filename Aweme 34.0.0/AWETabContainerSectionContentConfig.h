@interface AWETabContainerSectionContentConfig : NSObject
@property (nonatomic) BOOL bounces;
@property (nonatomic) BOOL scrollEnable;
@property (nonatomic) BOOL scrollsToTop;
- (void)setScrollEnable:;
- (BOOL)scrollEnable;
- (id)init;
- (void)setBounces:;
- (void)setScrollsToTop:;
- (BOOL)bounces;
- (BOOL)scrollsToTop;
@end
