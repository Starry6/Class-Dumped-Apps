@interface AWECommentPanelListSwiftImpl.CommentManagerFilterItemModel : AWEBaseApiModel
@property (nonatomic) NSString name;
@property (nonatomic) NSString type;
@property (nonatomic) BOOL selected;
- (id)initWithDictionary:error:;
- (id)init;
- (id)type;
- (void)setType:;
- (void).cxx_destruct;
- (void)setName:;
- (BOOL)selected;
- (id)name;
- (void)setSelected:;
- (id)initWithCoder:;
+ (id)JSONKeyPathsByPropertyKey;
@end
