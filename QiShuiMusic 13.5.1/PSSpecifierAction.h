@interface PSSpecifierAction : NSObject
@property (nonatomic) @? getter;
@property (nonatomic) @? setter;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)setter;
- (void)setSetter:;
- (id)getter;
- (void)setGetter:;
+ (id)actionWithGetter:setter:;
+ (id)actionWithTarget:getterSelector:setterSelector:;
+ (id)actionWithBoolDetailClass:;
@end
