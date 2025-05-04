@interface AWECodeGenDanmakuTextStyleModel : AWEBaseDataModel
@property (nonatomic) q start;
@property (nonatomic) q length;
@property (nonatomic) BOOL underline;
- (void)setStart:;
- (void)setLength:;
- (long long)length;
- (long long)start;
- (void)setUnderline:;
- (BOOL)underline;
+ (id)JSONKeyPathsByPropertyKey;
@end
