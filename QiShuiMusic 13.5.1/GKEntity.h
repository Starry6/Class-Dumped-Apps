@interface GKEntity : NSObject
@property (nonatomic) NSArray components;
- (id)components;
- (id)init;
- (void)dealloc;
- (id)copy;
- (void)addComponent:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)componentForClass:;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)componentForKey:;
- (void)updateWithDeltaTime:;
- (void)removeComponent:;
- (void)removeComponentForClass:;
+ (id)entity;
+ (BOOL)supportsSecureCoding;
@end
