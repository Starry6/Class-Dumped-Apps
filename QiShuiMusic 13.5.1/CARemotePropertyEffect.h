@interface CARemotePropertyEffect : CARemoteEffect
@property (nonatomic) NSDictionary valuesByState;
@property (nonatomic) NSString keyPath;
- (void)setValue:forState:;
- (void)setKeyPath:;
- (id)keyPath;
- (id)initWithKeyPath:;
- (id)name;
- (BOOL)_setCARenderRemoteEffect:layer:;
- (id)valueForState:;
- (id)_copyRenderRemoteEffectForLayer:;
- (id)valuesByState;
- (void)setValuesByState:;
+ (BOOL)supportsSecureCoding;
+ (id)effectWithKeyPath:;
@end
