@interface AWELiteUnLoginReadTaskModel : MTLModel
@property (nonatomic) q loopStatus;
@property (nonatomic) q pendantJumpToTaskpage;
@property (nonatomic) BOOL loopTomorrow;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)loopStatus;
- (void)setLoopStatus:;
- (long long)pendantJumpToTaskpage;
- (void)setPendantJumpToTaskpage:;
- (BOOL)loopTomorrow;
- (void)setLoopTomorrow:;
+ (id)JSONKeyPathsByPropertyKey;
@end
