@interface AWEIMCodeGenMsgTabCellInfoModel : AWEBaseDataModel
@property (nonatomic) NSString cellType;
@property (nonatomic) q topState;
@property (nonatomic) q setTopTime;
@property (nonatomic) q cancelTopTime;
- (long long)topState;
- (void)setTopState:;
- (long long)setTopTime;
- (void)setSetTopTime:;
- (long long)cancelTopTime;
- (void)setCancelTopTime:;
- (id)cellType;
- (void)setCellType:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
