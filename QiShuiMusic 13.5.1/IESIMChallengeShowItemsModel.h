@interface IESIMChallengeShowItemsModel : MTLModel
@property (nonatomic) NSString type;
@property (nonatomic) NSString desc;
@property (nonatomic) NSString schema;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)schema;
- (id)desc;
- (void)setDesc:;
- (void)setType:;
- (void)setSchema:;
- (id)type;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
