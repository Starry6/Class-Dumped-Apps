@interface AWEIMMessageBindButtonInfoModel : AWEBaseApiModel
@property (nonatomic) NSArray content;
@property (nonatomic) NSString abGroup;
@property (nonatomic) NSArray fitContent;
@property (nonatomic) {CGSize=dd} size;
- (id)fitContent;
- (void)setFitContent:;
- (id)abGroup;
- (id)content;
- (void)setContent:;
- (id)size;
- (void).cxx_destruct;
- (void)setSize:;
- (void)setAbGroup:;
+ (id)JSONKeyPathsByPropertyKey;
@end
