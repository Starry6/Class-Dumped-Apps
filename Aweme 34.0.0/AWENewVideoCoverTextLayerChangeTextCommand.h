@interface AWENewVideoCoverTextLayerChangeTextCommand : AWENewVideoCoverCommand
@property (nonatomic) NSString originContent;
@property (nonatomic) NSString nowContent;
- (void)setOriginContent:;
- (id)originContent;
- (void)realExecute;
- (void)realUnExecute;
- (id)nowContent;
- (void)setNowContent:;
- (void).cxx_destruct;
@end
