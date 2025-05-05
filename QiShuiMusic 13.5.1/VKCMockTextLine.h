@interface VKCMockTextLine : NSObject
@property (nonatomic) {_NSRange=QQ} range;
@property (nonatomic) NSString text;
@property (nonatomic) VKQuad quad;
@property (nonatomic) NSArray words;
- (void)setRange:;
- (void)setText:;
- (id)range;
- (void).cxx_destruct;
- (id)text;
- (id)words;
- (id)quad;
- (void)setWords:;
- (void)setQuad:;
- (id)initWithWordsArray:startingIndex:;
- (void)loadWordsArrayFromWords:startingIndex:;
@end
