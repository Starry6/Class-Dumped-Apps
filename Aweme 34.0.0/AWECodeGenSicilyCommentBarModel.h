@interface AWECodeGenSicilyCommentBarModel : AWEBaseDataModel
@property (nonatomic) NSString prefix;
@property (nonatomic) NSString desc;
@property (nonatomic) NSString schema;
- (id)schema;
- (id)prefix;
- (void)setSchema:;
- (void)setPrefix:;
- (void)setDesc:;
- (id)desc;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
