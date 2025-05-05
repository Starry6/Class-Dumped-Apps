@interface UIKBRenderingContext : NSObject
@property (nonatomic) Q shiftState;
@property (nonatomic) q keyboardType;
@property (nonatomic) UIKBRenderConfig renderConfig;
@property (nonatomic) q handBias;
@property (nonatomic) BOOL isFloating;
- (long long)handBias;
- (BOOL)isFloating;
- (void)setIsFloating:;
- (long long)keyboardType;
- (void)setKeyboardType:;
- (id)renderConfig;
- (unsigned long long)shiftState;
- (void)setRenderConfig:;
- (void)setShiftState:;
- (void).cxx_destruct;
- (id)initWithRenderConfig:;
- (void)setHandBias:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (id)renderingContextForRenderConfig:;
@end
