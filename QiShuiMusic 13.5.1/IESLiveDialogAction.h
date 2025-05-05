@interface IESLiveDialogAction : NSObject
@property (nonatomic) NSString actionText;
@property (nonatomic) BOOL keepAliveAfterClick;
@property (nonatomic) @? actionBlock;
- (BOOL)keepAliveAfterClick;
- (void)setKeepAliveAfterClick:;
- (id)actionBlock;
- (void).cxx_destruct;
- (void)setActionBlock:;
- (id)actionText;
- (void)setActionText:;
@end
