@interface AWEProfileLinkAreaItemModel : MTLModel
@property (nonatomic) Q itemType;
@property (nonatomic) NSString title;
@property (nonatomic) NSString schema;
@property (nonatomic) NSDictionary extraInfoDict;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setExtraInfoDict:;
- (id)extraInfoDict;
- (unsigned long long)itemType;
- (id)schema;
- (void)setItemType:;
- (void)setSchema:;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
+ (id)JSONKeyPathsByPropertyKey;
@end
