@interface AWEIMChatCellDeleteComponent : AWEIMChatCellComponentBase
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)updateComponentWhenChatUpdate:;
- (void)onPresenter:willUpdateView:;
- (long long)currentComponentTailType;
- (void)didClickDeleteIcon;
+ (BOOL)canCreateComponentWithContext:;
@end
