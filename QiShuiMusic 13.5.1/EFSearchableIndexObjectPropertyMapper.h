@interface EFSearchableIndexObjectPropertyMapper : NSObject
@property (nonatomic) NSArray attributes;
@property (nonatomic) NSDictionary children;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithChildren:;
- (id)children;
- (id)initWithAttributes:;
- (id)attributes;
- (void)setChildren:;
- (void).cxx_destruct;
- (id)childForKey:;
- (id)initWithChildren:attributes:;
@end
