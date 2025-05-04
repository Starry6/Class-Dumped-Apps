@interface AWEIMChatCellNoticeUnreadComponent : AWEIMChatCellComponentBase
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)componentDidMounted:;
- (long long)currentComponentTailType;
- (void)didUpdateWithHintType:;
- (void)onCellDidClick:;
- (void)updatePresenterWithChat:type:;
+ (BOOL)canCreateComponentWithContext:;
@end
