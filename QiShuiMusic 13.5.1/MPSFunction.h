@interface MPSFunction : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) <MTLDevice> device;
@property (nonatomic) <MTLFunction> function;
@property (nonatomic) NSError error;
- (id)copyWithZone:device:;
- (id)init;
- (void)dealloc;
- (id)function;
- (id)error;
- (id)initWithCoder:;
- (id)debugDescription;
- (void)encodeWithCoder:;
- (id)name;
- (id)device;
- (id)copyWithZone:;
- (id)initWithDevice:functionName:zone:error:;
- (id)initWithCoder:device:error:;
- (void)buildIsCompleteWithFunction:error:;
- (void)buildAsync:withLibrary:;
- (void)buildStitchedFunctionAsyncWithName:;
- (id)functionPrototype;
- (id)newDAGUsingFunctionList:;
+ (BOOL)supportsSecureCoding;
@end
