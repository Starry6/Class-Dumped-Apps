@interface AWEScrollNumberViewConfig : NSObject
@property (nonatomic) UIColor textColor;
@property (nonatomic) UIFont font;
@property (nonatomic) Q maxRowNumber;
- (void)setMaxRowNumber:;
- (void)setTextColor:;
- (id)font;
- (void).cxx_destruct;
- (void)setFont:;
- (id)textColor;
- (unsigned long long)maxRowNumber;
+ (id)defaultConfig;
@end
