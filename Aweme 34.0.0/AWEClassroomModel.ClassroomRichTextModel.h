@interface AWEClassroomModel.ClassroomRichTextModel : MTLModel
@property (nonatomic) NSString text;
@property (nonatomic) q size;
@property (nonatomic) NSString color;
@property (nonatomic) BOOL isBold;
- (id)initWithDictionary:error:;
- (id)init;
- (BOOL)isBold;
- (void)setText:;
- (id)color;
- (id)text;
- (void)setColor:;
- (long long)size;
- (void).cxx_destruct;
- (void)setSize:;
- (void)setIsBold:;
- (id)initWithCoder:;
+ (id)JSONKeyPathsByPropertyKey;
@end
