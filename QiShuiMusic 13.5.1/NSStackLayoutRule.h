@interface NSStackLayoutRule : NSObject
@property (nonatomic) NSArray stackedRects;
@property (nonatomic) double spacing;
@property (nonatomic) q orientation;
@property (nonatomic) NSString identifier;
@property (nonatomic) NSString ruleDescription;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (double)spacing;
- (void)dealloc;
- (id)identifier;
- (long long)orientation;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)makeChildRules;
- (id)ruleDescription;
- (id)stackedRects;
+ (id)stackWithOrientation:stackedRects:spacing:;
+ (id)horizontalStackWithRects:spacing:;
+ (id)verticalStackWithRects:spacing:;
@end
