@interface IMSwizzledMethod : NSObject
@property (nonatomic) IMSwizzledMethod swizzledWithMethod;
@property (nonatomic) BOOL swizzled;
@property (nonatomic) ^{objc_method=} method;
@property (nonatomic) ^? implementation;
@property (nonatomic) r* typeEncoding;
@property (nonatomic) # swizzledClass;
@property (nonatomic) : swizzledSelector;
- (id)implementation;
- (id)method;
- (void).cxx_destruct;
- (id)description;
- (id)typeEncoding;
- (BOOL)isSwizzled;
- (BOOL)unswizzle;
- (id)initWithClass:selector:;
- (BOOL)swizzleWithMethod:;
- (id)swizzledWithMethod;
- (void)setSwizzledWithMethod:;
- (Class)swizzledClass;
- (SEL)swizzledSelector;
@end
