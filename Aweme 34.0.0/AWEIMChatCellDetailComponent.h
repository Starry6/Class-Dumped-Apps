@interface AWEIMChatCellDetailComponent : AWEIMChatCellComponentBase
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)updateComponentWhenChatUpdate:;
- (long long)currentComponentTailType;
+ (BOOL)canCreateComponentWithContext:;
@end
