@interface QQBaseResp : NSObject
@property (nonatomic) NSString result;
@property (nonatomic) NSString errorDescription;
@property (nonatomic) NSInteger type;
@property (nonatomic) NSString extendInfo;
- (id)extendInfo;
- (void)setExtendInfo:;
- (id)errorDescription;
- (id)result;
- (void)dealloc;
- (void)setType:;
- (int)type;
- (void).cxx_destruct;
- (void)setErrorDescription:;
- (void)setResult:;
@end
