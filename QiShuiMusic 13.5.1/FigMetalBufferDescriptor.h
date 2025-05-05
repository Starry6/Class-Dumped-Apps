@interface FigMetalBufferDescriptor : NSObject
@property (nonatomic) NSString label;
@property (nonatomic) Q length;
@property (nonatomic) Q options;
- (void)setOptions:;
- (id)init;
- (void)setLabel:;
- (id)label;
- (unsigned long long)options;
- (void).cxx_destruct;
- (unsigned long long)length;
- (void)setLength:;
- (void)initFromDescriptor:;
@end
