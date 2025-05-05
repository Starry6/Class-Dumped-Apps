@interface APSecStoreResultZZZX : NSObject
@property (nonatomic) NSString value;
@property (nonatomic) q errCode;
@property (nonatomic) NSInteger errCodeDetail;
- (long long)errCode;
- (int)errCodeDetail;
- (void)setErrCode:;
- (void)setErrCodeDetail:;
- (void)setValue:;
- (void).cxx_destruct;
- (id)value;
@end
