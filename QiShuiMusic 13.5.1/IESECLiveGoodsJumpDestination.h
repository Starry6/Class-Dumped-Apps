@interface IESECLiveGoodsJumpDestination : MTLModel
@property (nonatomic) q blankJumpDestination;
@property (nonatomic) q buttonJumpDestination;
@property (nonatomic) BOOL skipCheck;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)blankJumpDestination;
- (long long)buttonJumpDestination;
- (void)setBlankJumpDestination:;
- (void)setButtonJumpDestination:;
- (void)setSkipCheck:;
- (BOOL)skipCheck;
+ (id)JSONKeyPathsByPropertyKey;
@end
