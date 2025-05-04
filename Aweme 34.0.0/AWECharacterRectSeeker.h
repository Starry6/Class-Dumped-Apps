@interface AWECharacterRectSeeker : NSObject
@property (nonatomic) NSTextStorage textStorage;
@property (nonatomic) NSLayoutManager layoutManager;
@property (nonatomic) NSTextContainer textContainer;
- (void)configWithModel:;
- (id)characterRectAtIndex:;
- (void)setupBasic;
- (id)textStorage;
- (id)layoutManager;
- (id)init;
- (void)setTextContainer:;
- (void).cxx_destruct;
- (void)setTextStorage:;
- (id)textContainer;
- (void)setLayoutManager:;
@end
