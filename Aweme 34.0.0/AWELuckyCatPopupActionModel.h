@interface AWELuckyCatPopupActionModel : MTLModel
@property (nonatomic) Q type;
@property (nonatomic) NSString actionID;
@property (nonatomic) NSString onSuccessActionID;
@property (nonatomic) NSString onFailActionID;
@property (nonatomic) NSDictionary paramsDic;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setParamsDic:;
- (id)paramsDic;
- (id)onSuccessActionID;
- (void)setOnSuccessActionID:;
- (id)onFailActionID;
- (void)setOnFailActionID:;
- (unsigned long long)type;
- (void)setType:;
- (void).cxx_destruct;
- (id)actionID;
- (void)setActionID:;
+ (id)JSONKeyPathsByPropertyKey;
@end
