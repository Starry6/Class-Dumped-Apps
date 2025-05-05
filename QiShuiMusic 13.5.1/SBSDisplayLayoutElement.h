@interface SBSDisplayLayoutElement : FBSDisplayLayoutElement
@property (nonatomic) q layoutRole;
@property (nonatomic) BOOL sb_transitioning;
@property (nonatomic) BOOL sb_stashedPIP;
@property (nonatomic) BOOL springBoardElement;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setLayoutRole:;
- (long long)layoutRole;
- (id)succinctDescriptionBuilder;
- (void)sb_setStashedPIP:;
- (BOOL)isSpringBoardElement;
- (BOOL)sb_isTransitioning;
- (void)sb_setTransitioning:;
- (BOOL)sb_isStashedPIP;
- (id)initWithIdentifier:layoutRole:;
@end
