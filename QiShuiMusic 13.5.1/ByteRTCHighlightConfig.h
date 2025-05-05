@interface ByteRTCHighlightConfig : NSObject
@property (nonatomic) BOOL enableHighlight;
@property (nonatomic) I borderColor;
@property (nonatomic) NSInteger borderWidth;
- (BOOL)enableHighlight;
- (void)setEnableHighlight:;
- (void)setBorderColor:;
- (unsigned int)borderColor;
- (int)borderWidth;
- (void)setBorderWidth:;
@end
