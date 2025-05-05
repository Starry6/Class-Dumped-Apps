@interface INObjectSection : NSObject
@property (nonatomic) NSString _identifier;
@property (nonatomic) NSString title;
@property (nonatomic) NSArray items;
- (id)_identifier;
- (id)items;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)title;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)initWithTitle:items:;
- (id)initWithIdentifier:title:items:;
+ (BOOL)supportsSecureCoding;
@end
