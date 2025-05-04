@interface AWECodeGenInsertItemCardModel : AWEBaseDataModel
@property (nonatomic) q index;
@property (nonatomic) q startTime;
@property (nonatomic) q endTime;
@property (nonatomic) NSInteger pullType;
- (int)pullType;
- (void)setPullType:;
- (void)setIndex:;
- (long long)index;
- (void)setStartTime:;
- (long long)endTime;
- (void)setEndTime:;
- (long long)startTime;
+ (id)JSONKeyPathsByPropertyKey;
@end
