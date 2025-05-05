@interface ADEspressoBufferHandle : NSObject
@property (nonatomic) ^v data;
@property (nonatomic) NSArray dimensions;
@property (nonatomic) Q dimensionsProduct;
@property (nonatomic) Q width;
@property (nonatomic) Q height;
@property (nonatomic) Q channels;
- (id)dimensions;
- (unsigned long long)channels;
- (BOOL)writeToFile:atomically:;
- (id)data;
- (BOOL)copyTo:;
- (unsigned long long)height;
- (unsigned long long)width;
- (void).cxx_destruct;
- (id)initWithName:buffer:;
- (void)clearBuffer;
- (id)initWithName:rawData:dimensions:strides:;
- (unsigned long long)dimensionsProduct;
@end
