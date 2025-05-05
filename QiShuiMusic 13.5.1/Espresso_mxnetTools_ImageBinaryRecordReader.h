@interface Espresso_mxnetTools_ImageBinaryRecordReader : NSObject
@property (nonatomic) NSFileHandle recFileHandle;
@property (nonatomic) {_mxnetTools_recordHeader_t_=II} recordHeader;
@property (nonatomic) {_mxnetTools_imageHeader_t_=If{_mxnetTools_imageID_t_=[2Q]}} imageHeader;
@property (nonatomic) Q currentOffset;
@property (nonatomic) NSMutableArray labelsPrivate;
- (id)imageData;
- (unsigned long long)currentOffset;
- (id)labels;
- (void).cxx_destruct;
- (id)initWithRecFile:error:;
- (BOOL)seekRecordWithID:error:;
- (BOOL)nextRecordAndError:;
- (id)imageID;
- (id)recFileHandle;
- (void)setRecFileHandle:;
- (id)recordHeader;
- (void)setRecordHeader:;
- (id)imageHeader;
- (void)setImageHeader:;
- (void)setCurrentOffset:;
- (id)labelsPrivate;
- (void)setLabelsPrivate:;
@end
