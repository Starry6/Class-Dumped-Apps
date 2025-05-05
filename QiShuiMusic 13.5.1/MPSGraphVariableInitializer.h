@interface MPSGraphVariableInitializer : NSObject
@property (nonatomic) I initializerType;
- (id)init;
- (void).cxx_destruct;
- (id)initializedDataWithNumberOfValues:dataType:;
- (unsigned int)initializerType;
+ (id)initializerWithConstant:;
+ (id)initializerWithZeros;
+ (id)initializerWithOnes;
+ (id)initializerWithRandomUniformWithMinimum:maximum:;
+ (id)initializerWithFile:;
@end
