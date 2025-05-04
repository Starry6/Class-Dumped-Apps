@interface AWECoverTextStorage : NSTextStorage
@property (nonatomic) NSMutableAttributedString imp;
@property (nonatomic) AWECoverTextConfig textConfig;
- (id)textConfig;
- (void)setTextConfig:;
- (void)p_updateAttributed;
- (id)init;
- (void)replaceCharactersInRange:withString:;
- (void)processEditing;
- (id)attributesAtIndex:effectiveRange:;
- (id)string;
- (void)setAttributes:range:;
- (void).cxx_destruct;
- (id)imp;
- (void)setImp:;
@end
