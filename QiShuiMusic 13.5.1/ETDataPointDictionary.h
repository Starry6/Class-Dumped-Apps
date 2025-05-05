@interface ETDataPointDictionary : NSObject
@property (nonatomic) {map<std::string image_buffers;
@property (nonatomic) {map<std::string float_buffers;
- (void).cxx_destruct;
- (id)dataForKey:error:;
- (id).cxx_construct;
- (BOOL)setImage:forKey:;
- (BOOL)setData:size:forKey:freeWhenDone:;
- (id)image_buffers;
- (id)dataArrayForKey:error:;
- (void)setImage_buffers:;
- (id)float_buffers;
- (void)setFloat_buffers:;
@end
