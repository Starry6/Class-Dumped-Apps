@interface MTLValueTransformer : NSValueTransformer
@property (nonatomic) @? forwardBlock;
@property (nonatomic) @? reverseBlock;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)transformedValue:;
- (void).cxx_destruct;
- (id)transformedValue:success:error:;
- (id)initWithForwardBlock:reverseBlock:;
- (id)forwardBlock;
- (id)reverseBlock;
+ (id)bdx_auth_arrayOfDictionaryValueTransformerWithModelClass:;
+ (id)bdx_auth_arrayStringValueTransformer;
+ (id)bdx_auth_dictionaryValueTransformerWithModelClass:;
+ (id)bdx_auth_setStringValueTransformer;
+ (BOOL)allowsReverseTransformation;
+ (Class)transformedValueClass;
+ (id)transformerUsingForwardBlock:reverseBlock:;
+ (id)transformerUsingForwardBlock:;
+ (id)transformerUsingReversibleBlock:;
+ (id)transformerWithBlock:;
+ (id)reversibleTransformerWithBlock:;
+ (id)reversibleTransformerWithForwardBlock:reverseBlock:;
@end
