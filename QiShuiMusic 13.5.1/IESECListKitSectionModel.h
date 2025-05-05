@interface IESECListKitSectionModel : MTLModel
@property (nonatomic) Q operationType;
@property (nonatomic) Q sectionType;
@property (nonatomic) NSString sectionID;
@property (nonatomic) Q column;
@property (nonatomic) IESECListKitStyleModel sectionStyle;
@property (nonatomic) NSArray items;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setSectionStyle:;
- (unsigned long long)sectionType;
- (unsigned long long)operationType;
- (void)setSectionType:;
- (id)items;
- (void)setSectionID:;
- (void)setOperationType:;
- (id)sectionID;
- (void)setItems:;
- (void).cxx_destruct;
- (unsigned long long)column;
- (id)sectionStyle;
- (void)setColumn:;
+ (id)itemsJSONTransformer;
+ (id)sectionStyleJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
