@interface SAMICore_BinaryContextUpdateParameter : NSObject
@property (nonatomic) q type;
@property (nonatomic) ^v data;
@property (nonatomic) NSInteger dataLen;
- (void)setDataLen:;
- (id)data;
- (void)setType:;
- (long long)type;
- (void)setData:;
- (int)dataLen;
@end
