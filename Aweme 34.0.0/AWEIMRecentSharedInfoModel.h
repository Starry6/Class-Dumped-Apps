@interface AWEIMRecentSharedInfoModel : NSObject
@property (nonatomic) Q type;
@property (nonatomic) NSString secUid;
@property (nonatomic) NSString uid;
@property (nonatomic) NSString cid;
@property (nonatomic) q bizType;
- (id)secUid;
- (long long)bizType;
- (void)setBizType:;
- (void)setSecUid:;
- (id)cid;
- (void)setUid:;
- (id)uid;
- (unsigned long long)type;
- (void)setType:;
- (void).cxx_destruct;
- (id)initWithDict:;
- (id)toDictionary;
- (void)setCid:;
@end
