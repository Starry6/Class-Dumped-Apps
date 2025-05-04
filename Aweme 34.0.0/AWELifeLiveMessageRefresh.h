@interface AWELifeLiveMessageRefresh : MTLModel
@property (nonatomic) NSArray cardIds;
@property (nonatomic) NSArray grouponIds;
@property (nonatomic) BOOL isValid;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)cardIds;
- (void)setCardIds:;
- (id)grouponIds;
- (void)setGrouponIds:;
- (BOOL)isValid;
- (void)setIsValid:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
