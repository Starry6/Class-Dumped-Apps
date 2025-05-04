@interface AWECodeGenMateRelationModel : AWEBaseDataModel
@property (nonatomic) NSInteger mateStatus;
@property (nonatomic) NSInteger mateApplyForward;
@property (nonatomic) NSInteger mateApplyReverse;
@property (nonatomic) q mateCreateTime;
@property (nonatomic) q mateApplyUid;
- (int)mateApplyForward;
- (int)mateStatus;
- (long long)mateApplyUid;
- (void)setMateStatus:;
- (void)setMateApplyForward:;
- (int)mateApplyReverse;
- (void)setMateApplyReverse:;
- (long long)mateCreateTime;
- (void)setMateCreateTime:;
- (void)setMateApplyUid:;
+ (id)JSONKeyPathsByPropertyKey;
@end
