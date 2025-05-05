@interface MPSNNDefaultPadding : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (unsigned long long)paddingMethod;
- (id)initWithCoder:;
- (id)label;
- (id)debugDescription;
- (void)encodeWithCoder:;
- (id)initWithPaddingMethod:;
- (BOOL)isEqual:;
+ (id)paddingWithMethod:;
+ (id)paddingForTensorflowAveragePoolingValidOnly;
+ (BOOL)supportsSecureCoding;
+ (id)paddingForTensorflowAveragePooling;
+ (id)zeroPaddingWithTopAmount:bottomAmount:leftAmount:rightAmount:;
@end
