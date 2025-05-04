@interface AWEMatchInfoModel : MTLModel
@property (nonatomic) NSNumber begin;
@property (nonatomic) NSNumber end;
@property (nonatomic) NSString link;
@property (nonatomic) NSString query;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)begin;
- (void)setEnd:;
- (id)end;
- (void)setQuery:;
- (id)query;
- (void).cxx_destruct;
- (id)link;
- (void)setLink:;
- (void)setBegin:;
+ (id)JSONKeyPathsByPropertyKey;
@end
