@interface IESECActionDefine : MTLModel
@property (nonatomic) NSString actionId;
@property (nonatomic) NSString actionMeta;
@property (nonatomic) NSString checkAction;
@property (nonatomic) NSString trackMeta;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setCheckAction:;
- (id)actionMeta;
- (id)checkAction;
- (id)metaDictionary;
- (BOOL)needCheckLogin;
- (void)setActionMeta:;
- (void)setTrackMeta:;
- (id)trackMeta;
- (id)trackMetaDictionary;
- (void).cxx_destruct;
- (id)actionId;
- (void)setActionId:;
+ (id)JSONKeyPathsByPropertyKey;
@end
