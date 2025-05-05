@interface UIViewControllerPreviewAction : NSObject
@property (nonatomic) @? handler;
@property (nonatomic) NSString title;
- (void)setHandler:;
- (void)setTitle:;
- (id)handler;
- (id)title;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)_initWithTitle:handler:;
+ (id)actionWithTitle:handler:;
@end
