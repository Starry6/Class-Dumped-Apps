@interface AWEPublishVideoSyncAppModel : MTLModel
@property (nonatomic) NSString name;
@property (nonatomic) NSString tagName;
@property (nonatomic) NSString icon;
@property (nonatomic) NSArray clientKeys;
@property (nonatomic) NSDictionary oldVersionFields;
@property (nonatomic) BOOL selected;
@property (nonatomic) NSDictionary dictionaryValue;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)clientKeys;
- (void)setClientKeys:;
- (id)oldVersionFields;
- (void)setOldVersionFields:;
- (id)icon;
- (void)setIcon:;
- (void).cxx_destruct;
- (void)setName:;
- (BOOL)selected;
- (id)name;
- (void)setSelected:;
- (id)copyWithZone:;
- (id)tagName;
- (void)setTagName:;
+ (id)JSONKeyPathsByPropertyKey;
@end
