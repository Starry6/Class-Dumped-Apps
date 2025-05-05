@interface ICCFTypeWrapper : NSObject
@property (nonatomic) ^v cfTypeRef;
- (void)dealloc;
- (unsigned long long)hash;
- (BOOL)isEqual:;
- (id)ref;
- (id)initWithCFTypeRef:;
- (id)cfTypeRef;
- (void)setCfTypeRef:;
@end
