@interface AWERecordBeautyStatusScope : CKScorageScope
@property (nonatomic) CKScorageCOWMap itemMap;
@property (nonatomic) CKScorageCOWMap categoryMap;
- (id)itemMap;
- (id)categoryFor:;
- (void)setCategory:for:;
- (id)itemFor:;
- (void)setItem:for:;
- (id)categoryMap;
@end
