@interface AWECommentAudioRecorderVolumeIncreaseViewConfig : NSObject
@property (nonatomic) double itemMaxHeight;
@property (nonatomic) double itemMinHeight;
@property (nonatomic) UIColor itemColor;
@property (nonatomic) double itemWeight;
@property (nonatomic) double itemSpacing;
@property (nonatomic) UIColor highLightColor;
@property (nonatomic) UIColor defaultColor;
@property (nonatomic) NSString completionText;
- (void)setHighLightColor:;
- (void)setItemWeight:;
- (void)setItemMaxHeight:;
- (void)setItemMinHeight:;
- (void)setItemColor:;
- (double)itemMinHeight;
- (double)itemMaxHeight;
- (double)itemWeight;
- (double)itemSpacing;
- (id)completionText;
- (void)setItemSpacing:;
- (void).cxx_destruct;
- (id)highLightColor;
- (id)defaultColor;
- (void)setDefaultColor:;
- (void)setCompletionText:;
- (id)itemColor;
@end
