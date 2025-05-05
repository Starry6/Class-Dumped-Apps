@interface AWEIMAlertAction : NSObject
@property (nonatomic) NSString title;
@property (nonatomic) q style;
@property (nonatomic) @? handler;
- (void)setStyle:;
- (void)setHandler:;
- (void)setTitle:;
- (id)handler;
- (id)title;
- (void).cxx_destruct;
- (long long)style;
+ (id)actionWithTitle:style:handler:;
@end
