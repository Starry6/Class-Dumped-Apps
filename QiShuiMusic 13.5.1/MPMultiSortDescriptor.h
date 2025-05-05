@interface MPMultiSortDescriptor : NSSortDescriptor
@property (nonatomic) NSDictionary relatedProperties;
- (id)relatedProperties;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (void)setRelatedProperties:;
+ (id)sortDescriptorWithRelatedProperties:ascending:;
+ (BOOL)supportsSecureCoding;
@end
