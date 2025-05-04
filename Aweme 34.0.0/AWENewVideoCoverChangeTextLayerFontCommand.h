@interface AWENewVideoCoverChangeTextLayerFontCommand : AWENewVideoCoverCommand
@property (nonatomic) NLEResource_OC originFontResource;
@property (nonatomic) NLEResource_OC nowFontResource;
- (void)realExecute;
- (void)realUnExecute;
- (id)nowFontResource;
- (id)originFontResource;
- (void)setOriginFontResource:;
- (void)setNowFontResource:;
- (void).cxx_destruct;
@end
