@interface AWEIMGroupSpeakModeItemViewModel : NSObject
@property (nonatomic) NSString title;
@property (nonatomic) UIImage tailImage;
@property (nonatomic) UIImage leadingImage;
@property (nonatomic) @? clickAction;
- (id)clickAction;
- (void)setClickAction:;
- (void)setTailImage:;
- (id)tailImage;
- (id)leadingImage;
- (void)setLeadingImage:;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
@end
