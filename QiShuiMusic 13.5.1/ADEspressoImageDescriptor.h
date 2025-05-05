@interface ADEspressoImageDescriptor : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) ADImageDescriptor imageDescriptor;
@property (nonatomic) BOOL isInput;
- (id)imageDescriptor;
- (void).cxx_destruct;
- (id)name;
- (BOOL)isInput;
+ (id)descriptorWithName:imageDescriptor:isInput:;
@end
