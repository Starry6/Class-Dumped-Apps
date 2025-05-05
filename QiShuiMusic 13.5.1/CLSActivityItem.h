@interface CLSActivityItem : CLSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) NSString identifier;
@property (nonatomic) NSString title;
- (id)identifier;
- (void)setTitle:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)title;
- (void).cxx_destruct;
- (id)description;
- (id)_init;
- (id)dictionaryRepresentation;
- (void)setIdentifier:;
- (id)initWithIdentifier:title:;
- (BOOL)validateObject:;
+ (BOOL)supportsSecureCoding;
+ (id)relations;
@end
