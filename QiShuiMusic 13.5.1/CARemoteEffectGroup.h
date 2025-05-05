@interface CARemoteEffectGroup : CARemoteEffect
@property (nonatomic) NSArray effects;
@property (nonatomic) NSString groupName;
@property (nonatomic) BOOL matched;
@property (nonatomic) BOOL source;
- (id)effects;
- (void)setMatched:;
- (void)setGroupName:;
- (id)groupName;
- (id)name;
- (void)setSource:;
- (BOOL)_setCARenderRemoteEffect:layer:;
- (id)_copyRenderRemoteEffectForLayer:;
- (id)initWithEffects:;
- (void)setEffects:;
- (BOOL)isMatched;
- (BOOL)isSource;
+ (BOOL)supportsSecureCoding;
+ (id)groupWithEffects:;
@end
