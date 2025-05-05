@interface JSWrapperMap : NSObject
- (id)classInfoForClass:;
- (id)jsWrapperForObject:inContext:;
- (void).cxx_destruct;
- (id)objcWrapperForJSValueRef:inContext:;
- (id)initWithGlobalContextRef:;
- (id).cxx_construct;
@end
