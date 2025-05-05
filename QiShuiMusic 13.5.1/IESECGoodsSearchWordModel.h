@interface IESECGoodsSearchWordModel : MTLModel
@property (nonatomic) NSString word;
@property (nonatomic) NSString wordID;
@property (nonatomic) IESECGoodsSearchWordParamsModel params;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void).cxx_destruct;
- (id)params;
- (id)wordID;
- (void)setWordID:;
- (id)word;
- (void)setWord:;
- (void)setParams:;
+ (id)JSONKeyPathsByPropertyKey;
@end
