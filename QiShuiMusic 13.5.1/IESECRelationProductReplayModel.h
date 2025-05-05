@interface IESECRelationProductReplayModel : MTLModel
@property (nonatomic) NSString replayScheme;
@property (nonatomic) q fragmentID;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)fragmentID;
- (id)replayScheme;
- (void)setFragmentID:;
- (void)setReplayScheme:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
