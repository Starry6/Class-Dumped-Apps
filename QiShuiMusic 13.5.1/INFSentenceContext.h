@interface INFSentenceContext : NSObject
@property (nonatomic) NSNumber number;
@property (nonatomic) Q gender;
- (id)number;
- (unsigned long long)gender;
- (void)setGender:;
- (void)setNumber:;
- (void).cxx_destruct;
- (id)combinedWithContext:;
+ (id)sentenceContext;
@end
