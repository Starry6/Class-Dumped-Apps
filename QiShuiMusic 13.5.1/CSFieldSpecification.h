@interface CSFieldSpecification : NSObject
@property (nonatomic) NSString displayName;
@property (nonatomic) NSString attribute;
@property (nonatomic) NSString status;
@property (nonatomic) NSString token;
- (id)attribute;
- (id)token;
- (id)initWithCoder:;
- (id)displayName;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)status;
- (id)dictionaryFormat;
- (id)initWithDisplayName:attribute:status:token:;
@end
