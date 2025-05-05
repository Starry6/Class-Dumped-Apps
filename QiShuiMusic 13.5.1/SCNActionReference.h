@interface SCNActionReference : SCNActionGroup
@property (nonatomic) NSString referenceName;
- (void)dealloc;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)copyWithZone:;
- (BOOL)_isAReference;
- (id)referenceName;
- (void)setReferenceName:;
@end
