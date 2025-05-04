@interface AWEPOIDetailMoreOptionItemModel : MTLModel
@property (nonatomic) NSString itemID;
@property (nonatomic) NSString title;
@property (nonatomic) NSString iconUrl;
@property (nonatomic) NSString eventName;
@property (nonatomic) NSString schema;
@property (nonatomic) NSString popIcon;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)iconUrl;
- (void)setIconUrl:;
- (id)popIcon;
- (void)setPopIcon:;
- (id)schema;
- (id)itemID;
- (void)setItemID:;
- (void)setSchema:;
- (void)setEventName:;
- (void).cxx_destruct;
- (id)title;
- (id)eventName;
- (void)setTitle:;
+ (id)JSONKeyPathsByPropertyKey;
@end
