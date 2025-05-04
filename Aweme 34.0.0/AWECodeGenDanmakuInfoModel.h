@interface AWECodeGenDanmakuInfoModel : AWEBaseDataModel
@property (nonatomic) NSString danmakuId;
@property (nonatomic) q offset;
@property (nonatomic) q status;
@property (nonatomic) NSString extra;
@property (nonatomic) NSInteger actionType;
@property (nonatomic) NSInteger danmakuNoticeType;
- (void)setExtra:;
- (id)danmakuId;
- (void)setDanmakuId:;
- (int)danmakuNoticeType;
- (void)setDanmakuNoticeType:;
- (int)actionType;
- (void)setActionType:;
- (void)setStatus:;
- (void)setOffset:;
- (long long)offset;
- (id)extra;
- (void).cxx_destruct;
- (long long)status;
+ (id)JSONKeyPathsByPropertyKey;
@end
