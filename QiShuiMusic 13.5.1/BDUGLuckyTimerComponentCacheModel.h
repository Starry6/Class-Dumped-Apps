@interface BDUGLuckyTimerComponentCacheModel : NSObject
@property (nonatomic) NSObject<NSCoding> info;
@property (nonatomic) double unUploadedTs;
@property (nonatomic) double expireTime;
- (void)setUnUploadedTs:;
- (double)unUploadedTs;
- (void)setInfo:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)info;
- (double)expireTime;
- (void)setExpireTime:;
@end
