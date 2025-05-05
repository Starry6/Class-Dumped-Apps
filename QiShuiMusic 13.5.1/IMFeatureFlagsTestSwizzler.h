@interface IMFeatureFlagsTestSwizzler : NSObject
@property (nonatomic) : feature;
@property (nonatomic) IMSwizzledMethod originalMethod;
@property (nonatomic) IMSwizzledMethod replacementMethod;
@property (nonatomic) : testMethod;
@property (nonatomic) BOOL enabled;
@property (nonatomic) BOOL swizzled;
- (void)swizzle;
- (SEL)feature;
- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)isEnabled;
- (id)initWithFeature:enabled:;
- (BOOL)isSwizzled;
- (void)unswizzle;
- (id)originalMethod;
- (id)replacementMethod;
- (SEL)testMethod;
@end
