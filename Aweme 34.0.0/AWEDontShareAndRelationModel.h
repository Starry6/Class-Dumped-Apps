@interface AWEDontShareAndRelationModel : AWEBaseApiModel
@property (nonatomic) NSArray dontShareIDList;
@property (nonatomic) NSArray relativeIDList;
- (id)relativeIDList;
- (id)dontShareIDList;
- (void)setDontShareIDList:;
- (void)setRelativeIDList:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
