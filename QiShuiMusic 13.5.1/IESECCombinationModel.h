@interface IESECCombinationModel : MTLModel
@property (nonatomic) NSString combinationID;
@property (nonatomic) IESECURLModel image;
@property (nonatomic) NSArray anchors;
@property (nonatomic) IESECCombinationJumpModel jump;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)combinationID;
- (void)setCombinationID:;
- (void)setJump:;
- (void)setImage:;
- (void).cxx_destruct;
- (id)image;
- (id)anchors;
- (void)setAnchors:;
- (id)jump;
+ (id)anchorsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
