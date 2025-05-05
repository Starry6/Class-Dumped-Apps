@interface MPModelSortDescriptor : NSSortDescriptor
@property (nonatomic) NSArray keyPath;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void)setKeyPath:;
- (id)keyPath;
- (void).cxx_destruct;
- (BOOL)isEqual:;
+ (BOOL)supportsSecureCoding;
+ (id)sortDescriptorWithKeyPath:ascending:;
@end
