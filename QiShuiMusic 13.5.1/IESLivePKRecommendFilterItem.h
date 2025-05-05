@interface IESLivePKRecommendFilterItem : NSObject
@property (nonatomic) NSInteger type;
@property (nonatomic) NSString titleText;
@property (nonatomic) BOOL isSelected;
@property (nonatomic) BOOL showBottomLine;
- (void)setShowBottomLine:;
- (BOOL)showBottomLine;
- (void)setTitleText:;
- (id)titleText;
- (void)setType:;
- (BOOL)isSelected;
- (int)type;
- (void).cxx_destruct;
- (void)setIsSelected:;
@end
