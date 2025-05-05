@interface AWECustomCommandResult : NSObject
@property (nonatomic) NSData data;
@property (nonatomic) NSString fileType;
@property (nonatomic) NSError error;
@property (nonatomic) q status;
@property (nonatomic) q operateTimestamp;
- (long long)operateTimestamp;
- (void)setOperateTimestamp:;
- (void)setStatus:;
- (id)init;
- (id)data;
- (void)setError:;
- (void)setFileType:;
- (id)error;
- (id)fileType;
- (void).cxx_destruct;
- (void)setData:;
- (long long)status;
@end
