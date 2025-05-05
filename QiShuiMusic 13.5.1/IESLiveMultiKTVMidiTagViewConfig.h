@interface IESLiveMultiKTVMidiTagViewConfig : NSObject
@property (nonatomic) q style;
@property (nonatomic) double height;
@property (nonatomic) double borderWidth;
@property (nonatomic) double iconWidth;
@property (nonatomic) UIFont textFont;
@property (nonatomic) double iconLeftOffset;
@property (nonatomic) double textLeftOffset;
@property (nonatomic) double textRightOffset;
- (double)textRightOffset;
- (double)iconLeftOffset;
- (id)initWithTagViewStyle:;
- (void)setIconLeftOffset:;
- (void)setTextLeftOffset:;
- (void)setTextRightOffset:;
- (double)textLeftOffset;
- (double)iconWidth;
- (void)setStyle:;
- (double)borderWidth;
- (id)textFont;
- (double)height;
- (void)setBorderWidth:;
- (void)setHeight:;
- (void).cxx_destruct;
- (long long)style;
- (void)setTextFont:;
- (void)setIconWidth:;
@end
