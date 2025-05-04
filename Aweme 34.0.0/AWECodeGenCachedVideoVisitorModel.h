@interface AWECodeGenCachedVideoVisitorModel : AWEBaseDataModel
@property (nonatomic) NSString userId;
@property (nonatomic) NSInteger sourceType;
- (void)setSourceType:;
- (int)sourceType;
- (id)userId;
- (void).cxx_destruct;
- (void)setUserId:;
+ (id)JSONKeyPathsByPropertyKey;
@end
