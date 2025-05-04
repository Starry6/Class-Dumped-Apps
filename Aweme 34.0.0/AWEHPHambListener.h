@interface AWEHPHambListener : NSObject
@property (nonatomic) NSArray names;
@property (nonatomic) @? callBack;
- (id)initWithNames:callBack:;
- (id)names;
- (void).cxx_destruct;
- (id)callBack;
+ (id)listenerWithNames:callBack:;
@end
