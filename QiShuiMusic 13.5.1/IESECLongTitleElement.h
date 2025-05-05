@interface IESECLongTitleElement : MTLModel
@property (nonatomic) IESECIconsWithSpaceElement headIconElement;
@property (nonatomic) IESECTextElement titleContent;
@property (nonatomic) IESECIconsWithSpaceElement tailIconElement;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)tailIconElement;
- (id)headIconElement;
- (void)setHeadIconElement:;
- (void)setTailIconElement:;
- (void)setTitleContent:;
- (void).cxx_destruct;
- (id)titleContent;
+ (id)JSONKeyPathsByPropertyKey;
@end
