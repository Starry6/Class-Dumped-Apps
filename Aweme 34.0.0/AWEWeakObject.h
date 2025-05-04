@interface AWEWeakObject : NSObject
@property (nonatomic) NSObject content;
- (id)content;
- (void)dealloc;
- (void)setContent:;
- (void).cxx_destruct;
- (id)initWithContent:;
+ (id)weakObjectWithContent:;
@end
