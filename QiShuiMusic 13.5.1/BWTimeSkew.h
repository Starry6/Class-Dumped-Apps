@interface BWTimeSkew : NSObject
@property (nonatomic) {?=qiIq} native;
@property (nonatomic) {?=qiIq} original;
@property (nonatomic) {?=qiIq} adjusted;
@property (nonatomic) BOOL isBracketFrame;
@property (nonatomic) BOOL isSISFrame;
@property (nonatomic) BOOL isStartOfDiscontinuity;
- (BOOL)isSISFrame;
- (void)setAdjusted:;
- (BOOL)isBracketFrame;
- (BOOL)isStartOfDiscontinuity;
- (void)setIsStartOfDiscontinuity:;
- (id)native;
- (id)description;
- (id)original;
- (id)initWithNativeTime:originalTime:isBracketFrame:isSISFrame:;
- (id)adjusted;
- (id)copyWithZone:;
@end
