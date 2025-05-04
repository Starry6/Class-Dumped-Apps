@interface AWEIMChatCellHighlightHintConfig : NSObject
@property (nonatomic) BOOL hintDisable;
@property (nonatomic) NSString hintContent;
@property (nonatomic) BOOL disableHighlightColor;
- (void)setHintDisable:;
- (id)hintContent;
- (void)setHintContent:;
- (id)initWithHitContent:;
- (BOOL)hintDisable;
- (BOOL)disableHighlightColor;
- (void)setDisableHighlightColor:;
- (void).cxx_destruct;
- (BOOL)isEqual:;
@end
