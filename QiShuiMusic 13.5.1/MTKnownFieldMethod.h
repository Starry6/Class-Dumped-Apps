@interface MTKnownFieldMethod : NSObject
@property (nonatomic) ^? imp;
@property (nonatomic) : accessor;
- (SEL)accessor;
- (id)imp;
- (void)setAccessor:;
- (id)initWithIMP:accessor:;
- (void)setImp:;
@end
