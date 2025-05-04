@interface AWENewVideoCoverChangeTextTemplateLayerFontCommand : AWENewVideoCoverCommand
@property (nonatomic) NSMutableArray originFonts;
@property (nonatomic) q nowType;
@property (nonatomic) NSString nowResourceId;
- (void)setNowType:;
- (void)realExecute;
- (void)realUnExecute;
- (void)setOriginFonts:;
- (id)originFonts;
- (long long)nowType;
- (id)nowResourceId;
- (void)setNowResourceId:;
- (void).cxx_destruct;
@end
