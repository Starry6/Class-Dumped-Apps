@interface CVNLPTextDecodingContext : NSObject
@property (nonatomic) NSString history;
@property (nonatomic) {_NSRange=QQ} activeRange;
- (id)history;
- (id)initWithHistory:;
- (void).cxx_destruct;
- (id)initWithHistory:activeRange:;
- (id)activeSubstring;
- (id)inactiveSubstring;
- (id)activeRange;
@end
