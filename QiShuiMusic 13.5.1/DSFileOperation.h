@interface DSFileOperation : NSObject
@property (nonatomic) DSFileOperationID operationID;
@property (nonatomic) NSProgress progress;
@property (nonatomic) NSDate dateStarted;
@property (nonatomic) UTType utType;
- (id)init;
- (void)setProgress:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)progress;
- (void)encodeWithCoder:;
- (id)operationID;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (void)setOperationID:;
- (id)dateStarted;
- (void)setDateStarted:;
- (id)utType;
- (void)setUtType:;
+ (BOOL)dateIsBusyFolderDate:;
+ (BOOL)supportsSecureCoding;
@end
