@interface AWETabBarElementButtonViewModel : NSObject
@property (nonatomic) NSString identify;
@property (nonatomic) AWETabBarElementButtonInfo foldInfo;
@property (nonatomic) AWETabBarElementButtonInfo unFoldInfo;
@property (nonatomic) BOOL isSelected;
@property (nonatomic) @? clickBlock;
- (void)setClickBlock:;
- (id)clickBlock;
- (id)foldInfo;
- (id)unFoldInfo;
- (void)setFoldInfo:;
- (void)setUnFoldInfo:;
- (void)setIsSelected:;
- (BOOL)isSelected;
- (void).cxx_destruct;
- (id)identify;
- (void)setIdentify:;
@end
