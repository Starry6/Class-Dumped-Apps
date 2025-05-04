@interface AWEPLVButtonListHeaderModel : MTLModel
@property (nonatomic) NSString title;
@property (nonatomic) NSString schema;
@property (nonatomic) NSString titleIcon;
@property (nonatomic) NSArray buttonList;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)buttonList;
- (void)setButtonList:;
- (id)schema;
- (void)setSchema:;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (void)setTitleIcon:;
- (id)titleIcon;
+ (id)buttonListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
