@interface AWEElementGroupLayoutConfig : NSObject
@property (nonatomic) q layoutType;
@property (nonatomic) BOOL scrollEnable;
@property (nonatomic) double itemSpacing;
- (void)setScrollEnable:;
- (BOOL)scrollEnable;
- (void)setLayoutType:;
- (long long)layoutType;
- (id)init;
- (double)itemSpacing;
- (void)setItemSpacing:;
+ (id)horizontalLayoutWithScrollEnable:itemSpacing:;
+ (id)verticalLayout;
@end
