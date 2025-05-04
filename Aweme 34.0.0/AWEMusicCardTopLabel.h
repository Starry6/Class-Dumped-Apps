@interface AWEMusicCardTopLabel : AWEBaseApiModel
@property (nonatomic) NSString name;
@property (nonatomic) NSString schema;
@property (nonatomic) AWEMusicCardUrlModel icon;
@property (nonatomic) NSArray text;
@property (nonatomic) q trunc_pos;
- (long long)trunc_pos;
- (void)setTrunc_pos:;
- (id)schema;
- (void)setSchema:;
- (id)icon;
- (void)setText:;
- (id)text;
- (void)setIcon:;
- (void).cxx_destruct;
- (void)setName:;
- (id)name;
+ (id)JSONKeyPathsByPropertyKey;
@end
