@interface IESLiveAction : NSObject
@property (nonatomic) NSString title;
@property (nonatomic) : selector;
@property (nonatomic) BOOL destructive;
- (SEL)selector;
- (BOOL)isDestructive;
- (void)setSelector:;
- (void)setTitle:;
- (void)setDestructive:;
- (id)title;
- (void).cxx_destruct;
+ (id)actionWithTitle:selector:;
@end
