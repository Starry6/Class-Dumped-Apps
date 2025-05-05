@interface IESLiveInteractAnimationPlayer : NSObject
@property (nonatomic) HTSLiveUser user;
@property (nonatomic) NSInteger playerPosition;
@property (nonatomic) NSInteger linkType;
- (int)playerPosition;
- (void)setPlayerPosition:;
- (void)setUser:;
- (void)setLinkType:;
- (id)user;
- (void).cxx_destruct;
- (int)linkType;
@end
