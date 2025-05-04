@interface AWERecWordModel : AWEBaseApiModel
@property (nonatomic) NSString text;
@property (nonatomic) q createTime;
@property (nonatomic) q type;
@property (nonatomic) q status;
@property (nonatomic) q userReaction;
@property (nonatomic) AWERecWordLocalStatusModel localStatus;
@property (nonatomic) BOOL recordWordAlreadyDisappear;
- (BOOL)recordWordAlreadyDisappear;
- (void)setRecordWordAlreadyDisappear:;
- (long long)userReaction;
- (void)setUserReaction:;
- (void)setLocalStatus:;
- (long long)createTime;
- (void)setStatus:;
- (void)setText:;
- (id)text;
- (long long)type;
- (void)setCreateTime:;
- (void)setType:;
- (void).cxx_destruct;
- (long long)status;
- (id)localStatus;
+ (id)JSONKeyPathsByPropertyKey;
@end
