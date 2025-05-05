@interface TLKTableColumnAlignment : TLKObject
@property (nonatomic) Q columnAlignment;
@property (nonatomic) q dataAlignment;
@property (nonatomic) BOOL isEqualWidth;
- (id)description;
- (long long)textAlignment;
- (void)setDataAlignment:;
- (void)setColumnAlignment:;
- (void)setIsEqualWidth:;
- (unsigned long long)columnAlignment;
- (long long)dataAlignment;
- (BOOL)isEqualWidth;
@end
