@interface EMTTokenizer : NSObject
@property (nonatomic) NSLocale outputLocale;
- (void).cxx_destruct;
- (id)format:;
- (id)initWithModelURL:;
- (id)format:preToPostItnMap:;
- (id)outputLocale;
@end
