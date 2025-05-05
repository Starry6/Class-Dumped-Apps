@interface NSLayoutRectRule : NSObject
@property (nonatomic) NSLayoutRect firstLayoutRect;
@property (nonatomic) NSLayoutRect secondLayoutRect;
@property (nonatomic) q relation;
@property (nonatomic) NSString identifier;
@property (nonatomic) NSString ruleDescription;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (id)identifier;
- (unsigned long long)hash;
- (long long)relation;
- (void)setRelation:;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)makeChildRules;
- (id)ruleDescription;
- (id)firstLayoutRect;
- (id)secondLayoutRect;
@end
