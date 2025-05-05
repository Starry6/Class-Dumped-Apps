@interface IESGurdEventMsgModel : NSObject
@property (nonatomic) NSInteger subType;
@property (nonatomic) NSInteger count;
@property (nonatomic) q duration;
@property (nonatomic) q extraNumber;
@property (nonatomic) NSString errMsg;
@property (nonatomic) NSString accessKey;
@property (nonatomic) NSString channels;
@property (nonatomic) NSString extra;
- (void)setExtraNumber:;
- (id)errMsg;
- (long long)extraNumber;
- (void)setErrMsg:;
- (void)setExtra:;
- (void)setCount:;
- (id)channels;
- (id)extra;
- (id)init;
- (void)setDuration:;
- (void).cxx_destruct;
- (void)setChannels:;
- (int)subType;
- (void)setSubType:;
- (int)count;
- (long long)duration;
- (id)accessKey;
- (void)setAccessKey:;
@end
