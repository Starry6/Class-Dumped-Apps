@interface RTIInputOperation : NSObject
@property (nonatomic) TIKeyboardInput keyboardInput;
@property (nonatomic) : actionSelector;
@property (nonatomic) NSInteger inputModality;
@property (nonatomic) NSString customInfoType;
@property (nonatomic) NSObject<NSSecureCoding> customInfo;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setKeyboardInput:;
- (int)inputModality;
- (void)setCustomInfoType:;
- (id)initWithCoder:;
- (void)setInputModality:;
- (void)encodeWithCoder:;
- (SEL)actionSelector;
- (id)keyboardInput;
- (void).cxx_destruct;
- (void)setActionSelector:;
- (id)customInfoType;
- (void)setCustomInfo:;
- (BOOL)isEqual:;
- (id)customInfo;
+ (BOOL)supportsSecureCoding;
+ (void)unregisterCustomInfoType:;
+ (void)registerCustomInfoClasses:forType:;
@end
