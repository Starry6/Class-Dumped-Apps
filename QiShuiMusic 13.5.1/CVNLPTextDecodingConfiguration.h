@interface CVNLPTextDecodingConfiguration : NSObject
@property (nonatomic) @? commitActionBlock;
- (id)initWithCommitActionBehavior:;
- (id)commitActionBlock;
- (void)setCommitActionBlock:;
+ (id)defaultCommitActionBehaviorForLocale:;
+ (id)defaultWhitespaceCommitActionBehavior;
+ (id)defaultCharacterCommitActionBehavior;
@end
