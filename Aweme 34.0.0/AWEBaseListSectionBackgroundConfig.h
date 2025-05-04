@interface AWEBaseListSectionBackgroundConfig : NSObject
@property (nonatomic) UIColor backgroundColor;
@property (nonatomic) double cornerRadius;
@property (nonatomic) Q rectCorner;
@property (nonatomic) BOOL excludeInsetsForBackgroundColor;
- (BOOL)excludeInsetsForBackgroundColor;
- (void)setRectCorner:;
- (void)setExcludeInsetsForBackgroundColor:;
- (unsigned long long)rectCorner;
- (void)setCornerRadius:;
- (id)backgroundColor;
- (void)setBackgroundColor:;
- (void).cxx_destruct;
- (double)cornerRadius;
@end
