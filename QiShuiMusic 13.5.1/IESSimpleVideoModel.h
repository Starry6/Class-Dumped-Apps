@interface IESSimpleVideoModel : MTLModel
@property (nonatomic) IESEffectURLModel coverURL;
@property (nonatomic) IESEffectURLModel playURL;
@property (nonatomic) NSString groupID;
@property (nonatomic) NSString identifier;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setGroupID:;
- (id)groupID;
- (id)identifier;
- (void).cxx_destruct;
- (id)playURL;
- (void)setPlayURL:;
- (id)coverURL;
- (void)setCoverURL:;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)JSONTransformerForKey:;
@end
