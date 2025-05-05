@interface UIOpenURLContext : NSObject
@property (nonatomic) NSDictionary optionsDictionary;
@property (nonatomic) NSDictionary URLOptionsDictionary;
@property (nonatomic) NSURL URL;
@property (nonatomic) UISceneOpenURLOptions options;
- (unsigned long long)hash;
- (id)options;
- (id)optionsDictionary;
- (void).cxx_destruct;
- (id)description;
- (id)initWithURL:options:;
- (BOOL)isEqual:;
- (id)URL;
- (id)URLOptionsDictionary;
@end
