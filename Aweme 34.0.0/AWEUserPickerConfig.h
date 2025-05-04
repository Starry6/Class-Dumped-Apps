@interface AWEUserPickerConfig : NSObject
@property (nonatomic) Q style;
@property (nonatomic) UIColor backgroundColor;
@property (nonatomic) UIColor cellTitleColor;
@property (nonatomic) UIColor cellEmptyColor;
@property (nonatomic) double tableContentTopInset;
@property (nonatomic) @? containerViewHideBlock;
- (double)tableContentTopInset;
- (id)containerViewHideBlock;
- (id)cellEmptyColor;
- (void)setContainerViewHideBlock:;
- (unsigned long long)style;
- (id)backgroundColor;
- (void).cxx_destruct;
- (id)initWithStyle:;
- (void)setStyle:;
- (id)cellTitleColor;
@end
