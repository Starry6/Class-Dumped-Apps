@interface BaseResp : NSObject
@property (nonatomic) NSInteger errCode;
@property (nonatomic) NSString errStr;
@property (nonatomic) NSInteger type;
- (int)errCode;
- (id)errStr;
- (void)setErrCode:;
- (void)setErrStr:;
- (void)setType:;
- (int)type;
- (void).cxx_destruct;
@end
