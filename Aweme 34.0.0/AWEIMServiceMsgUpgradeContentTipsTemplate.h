@interface AWEIMServiceMsgUpgradeContentTipsTemplate : AWEBaseApiModel
@property (nonatomic) NSString key;
@property (nonatomic) NSString name;
@property (nonatomic) NSString link;
@property (nonatomic) NSNumber action;
@property (nonatomic) AWEIMServiceMsgUpgradeTipsExtra extra;
- (void)setExtra:;
- (void)setKey:;
- (id)extra;
- (id)key;
- (void)setAction:;
- (id)action;
- (void).cxx_destruct;
- (void)setName:;
- (id)name;
- (id)link;
- (void)setLink:;
+ (id)extraJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
