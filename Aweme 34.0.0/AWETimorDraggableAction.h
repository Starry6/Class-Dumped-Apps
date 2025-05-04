@interface AWETimorDraggableAction : NSObject
@property (nonatomic) NSString title;
@property (nonatomic) NSString imageName;
@property (nonatomic) @? handler;
- (void)setHandler:;
- (id)handler;
- (void)setImageName:;
- (void).cxx_destruct;
- (id)title;
- (id)imageName;
- (void)setTitle:;
- (id)initWithTitle:imageName:handler:;
+ (id)actionWithTitle:imageName:handler:;
@end
