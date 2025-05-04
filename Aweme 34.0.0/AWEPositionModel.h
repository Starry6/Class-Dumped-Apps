@interface AWEPositionModel : AWEBaseDataModel
@property (nonatomic) NSInteger begin;
@property (nonatomic) NSInteger end;
- (int)begin;
- (void)setEnd:;
- (int)end;
- (void)setBegin:;
+ (id)JSONKeyPathsByPropertyKey;
@end
