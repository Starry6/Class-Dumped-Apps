@interface JSObjCClassInfo : NSObject
- (void)dealloc;
- (id)initForClass:;
- (id)constructorInContext:;
- (id)structureInContext:;
- (id)wrapperForObject:inContext:;
- (id)prototypeInContext:;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)allocateConstructorAndPrototypeInContext:;
@end
