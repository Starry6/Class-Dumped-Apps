@interface PTYMemoryViewBuffer : PTYCls
@property (nonatomic) ^v rawData;
@property (nonatomic) Q size;
@property (nonatomic) BOOL autoFreeRawData;
@property (nonatomic) BOOL readOnly;
@property (nonatomic) NSArray shape;
@property (nonatomic) NSDictionary customInfo;
- (BOOL)autoFreeRawData;
- (id)coreObject;
- (id)initWithCoreObject:;
- (void)setAutoFreeRawData:;
- (void)setShape:;
- (BOOL)readOnly;
- (id)init;
- (void)setReadOnly:;
- (void)dealloc;
- (void)setRawData:;
- (id)shape;
- (void).cxx_destruct;
- (id)description;
- (id)rawData;
- (void)setCustomInfo:;
- (void)setSize:;
- (id)customInfo;
- (unsigned long long)size;
@end
