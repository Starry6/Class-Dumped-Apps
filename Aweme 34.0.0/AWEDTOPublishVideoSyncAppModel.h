@interface AWEDTOPublishVideoSyncAppModel : MTLModel
@property (nonatomic) NSString name;
@property (nonatomic) NSString icon;
@property (nonatomic) NSArray clientKeys;
@property (nonatomic) NSDictionary oldVersionField;
@property (nonatomic) BOOL selected;
@property (nonatomic) NSString tagName;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)clientKeys;
- (void)setClientKeys:;
- (id)oldVersionField;
- (void)setOldVersionField:;
- (id)icon;
- (void)setIcon:;
- (void).cxx_destruct;
- (void)setName:;
- (BOOL)selected;
- (id)name;
- (void)setSelected:;
- (id)tagName;
- (void)setTagName:;
+ (id)JSONKeyPathsByPropertyKey;
@end
