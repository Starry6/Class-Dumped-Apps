@interface AWEEcomSearchResultTabItem : MTLModel
@property (nonatomic) NSString channel;
@property (nonatomic) NSString tabType;
@property (nonatomic) NSString tabName;
@property (nonatomic) NSString searchId;
@property (nonatomic) NSString sectionId;
@property (nonatomic) NSString sectionName;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)searchId;
- (void)setSearchId:;
- (id)tabType;
- (void)setTabType:;
- (id)channel;
- (id)sectionId;
- (void)setChannel:;
- (void).cxx_destruct;
- (void)setSectionId:;
- (void)setSectionName:;
- (id)sectionName;
- (id)tabName;
- (void)setTabName:;
+ (id)JSONKeyPathsByPropertyKey;
@end
