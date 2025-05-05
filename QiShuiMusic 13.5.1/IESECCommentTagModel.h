@interface IESECCommentTagModel : MTLModel
@property (nonatomic) NSNumber tagType;
@property (nonatomic) NSString tagText;
@property (nonatomic) IESECURLModel tagIcon;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)tagIcon;
- (id)tagText;
- (void)setTagIcon:;
- (void)setTagText:;
- (id)tagType;
- (void).cxx_destruct;
- (void)setTagType:;
+ (id)JSONKeyPathsByPropertyKey;
@end
