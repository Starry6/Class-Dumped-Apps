@interface AWEAdEditHint : MTLModel
@property (nonatomic) NSString language;
@property (nonatomic) NSString commentHint;
@property (nonatomic) double weight;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)commentHint;
- (void)setCommentHint:;
- (void)setWeight:;
- (double)weight;
- (void)setLanguage:;
- (void).cxx_destruct;
- (id)language;
+ (BOOL)automaticallyDefaultMapping;
+ (id)JSONKeyPathsByPropertyKey;
@end
