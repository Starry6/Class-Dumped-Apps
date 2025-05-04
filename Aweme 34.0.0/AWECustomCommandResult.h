@interface AWECustomCommandResult : NSObject
@property (nonatomic) NSData data;
@property (nonatomic) NSString fileType;
@property (nonatomic) NSError error;
@property (nonatomic) q status;
@property (nonatomic) q operateTimestamp;
- (void)setOperateTimestamp:;
- (long long)operateTimestamp;
- (id)fileType;
- (id)init;
- (void)setStatus:;
- (void)setError:;
- (void)setData:;
- (void)setFileType:;
- (void).cxx_destruct;
- (id)error;
- (id)data;
- (long long)status;
@end
