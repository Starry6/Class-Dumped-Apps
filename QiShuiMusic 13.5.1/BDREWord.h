@interface BDREWord : NSObject
@property (nonatomic) NSString wordStr;
@property (nonatomic) Q line;
@property (nonatomic) Q col;
- (void)setCol:;
- (id)wordStr;
- (id)initWordWithStr:line:col:;
- (void)setWordStr:;
- (void).cxx_destruct;
- (unsigned long long)line;
- (void)setLine:;
- (unsigned long long)col;
@end
