@interface NSLayoutAnchorRule : NSObject
@property (nonatomic) NSLayoutAnchor firstAnchor;
@property (nonatomic) NSLayoutAnchor secondAnchor;
@property (nonatomic) q relation;
@property (nonatomic) double constant;
@property (nonatomic) double multiplier;
@property (nonatomic) float priority;
@property (nonatomic) NSString identifier;
@property (nonatomic) NSString ruleDescription;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (double)constant;
- (id)identifier;
- (unsigned long long)hash;
- (double)multiplier;
- (long long)relation;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (float)priority;
- (id)secondAnchor;
- (id)firstAnchor;
- (id)makeChildRules;
- (id)ruleDescription;
- (id)makeLayoutConstraint;
@end
