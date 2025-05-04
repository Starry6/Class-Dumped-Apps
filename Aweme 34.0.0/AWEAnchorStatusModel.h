@interface AWEAnchorStatusModel : MTLModel
@property (nonatomic) q isNormalUI;
@property (nonatomic) q isNormalTrack;
@property (nonatomic) q isNormalJump;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setIsNormalUI:;
- (void)setIsNormalTrack:;
- (void)setIsNormalJump:;
- (long long)isNormalJump;
- (long long)isNormalTrack;
- (long long)isNormalUI;
+ (id)JSONKeyPathsByPropertyKey;
@end
