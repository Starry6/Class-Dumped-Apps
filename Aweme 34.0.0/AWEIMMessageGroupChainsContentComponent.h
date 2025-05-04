@interface AWEIMMessageGroupChainsContentComponent : AWEIMFlexComponentSwiftAdapter
@property (nonatomic) q scene;
- (void)componentDidMounted:;
- (id)searchAttributedString;
- (id)displayMessage;
- (void)setScene:;
- (id)init;
- (long long)scene;
+ (BOOL)canCreateComponentWithContext:;
@end
