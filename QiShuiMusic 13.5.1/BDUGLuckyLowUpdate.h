@interface BDUGLuckyLowUpdate : BDUGLuckyBDModel
@property (nonatomic) q minSupportVersion;
@property (nonatomic) NSString title;
@property (nonatomic) NSString content;
@property (nonatomic) NSString btnText;
- (id)btnText;
- (long long)minSupportVersion;
- (void)setBtnText:;
- (void)setMinSupportVersion:;
- (id)content;
- (void)setContent:;
- (void)setTitle:;
- (id)title;
- (void).cxx_destruct;
+ (id)modelCustomPropertyMapper;
@end
