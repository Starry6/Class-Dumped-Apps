@interface NSAlignmentLayoutRule : NSObject
@property (nonatomic) NSArray alignedAnchors;
@property (nonatomic) NSString identifier;
@property (nonatomic) NSString ruleDescription;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (id)identifier;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)makeChildRules;
- (id)ruleDescription;
- (id)alignedAnchors;
+ (id)alignmentWithAnchors:;
@end
