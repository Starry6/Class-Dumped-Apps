@interface IESLiveSaaSFeedPageViewContext : NSObject
@property (nonatomic) BOOL isFeedDrawerMode;
@property (nonatomic) NSValue contentInsets;
- (BOOL)isFeedDrawerMode;
- (void)setIsFeedDrawerMode:;
- (void)setContentInsets:;
- (id)contentInsets;
- (void).cxx_destruct;
+ (id)make:;
@end
