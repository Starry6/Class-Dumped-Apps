@interface VMUMutableFieldInfo : VMUFieldInfo
@property (nonatomic) I scannableSize;
@property (nonatomic) I stride;
@property (nonatomic) I flags;
@property (nonatomic) BOOL isCapture;
@property (nonatomic) BOOL isByref;
@property (nonatomic) NSString ivarName;
@property (nonatomic) NSString typeName;
@property (nonatomic) I scanType;
- (void)setKind:;
- (void)setOffset:;
- (void)setTypeName:;
- (void)setIsCapture:;
- (void)addSubField:;
- (BOOL)replaceFieldRecursively:withField:;
- (void)setIsByref:;
- (void)mutateTypeFieldsRecursivelyWithBlock:parentOffset:;
- (void)setIvarName:;
- (void)setFlags:;
- (void)setScannableSize:;
- (void)setStride:;
- (void)setScanType:;
- (void)setSize:;
@end
