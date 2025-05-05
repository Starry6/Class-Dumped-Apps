@interface BytedCertAlertAction : NSObject
@property (nonatomic) q type;
@property (nonatomic) NSString title;
@property (nonatomic) @? handler;
- (void)setType:;
- (void)setHandler:;
- (void)setTitle:;
- (id)handler;
- (long long)type;
- (id)title;
- (void).cxx_destruct;
+ (id)actionWithType:title:handler:;
@end
