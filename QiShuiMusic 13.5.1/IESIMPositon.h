@interface IESIMPositon : MTLModel
@property (nonatomic) q begin;
@property (nonatomic) q end;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setEnd:;
- (long long)end;
- (long long)begin;
- (void)setBegin:;
+ (id)JSONKeyPathsByPropertyKey;
@end
