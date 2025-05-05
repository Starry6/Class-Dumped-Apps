@interface AWEUserAlertAction : NSObject
@property (nonatomic) NSString title;
@property (nonatomic) q actionStyle;
@property (nonatomic) @? handler;
- (void)setHandler:;
- (long long)actionStyle;
- (void)setTitle:;
- (id)handler;
- (id)title;
- (void).cxx_destruct;
- (void)setActionStyle:;
+ (id)actionWithTitle:style:handler:;
@end
