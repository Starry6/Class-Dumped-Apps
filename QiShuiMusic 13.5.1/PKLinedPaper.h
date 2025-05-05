@interface PKLinedPaper : NSObject
@property (nonatomic) {CGPoint=dd} lineSpacing;
@property (nonatomic) double horizontalInset;
- (unsigned long long)hash;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)lineSpacing;
- (double)horizontalInset;
- (id)initWithLineSpacing:horizontalInset:;
@end
