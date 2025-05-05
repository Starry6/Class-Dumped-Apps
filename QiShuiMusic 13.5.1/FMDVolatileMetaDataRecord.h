@interface FMDVolatileMetaDataRecord : NSObject
@property (nonatomic) NSDictionary dictionary;
@property (nonatomic) NSDictionary dictionaryValue;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)dictionary;
- (id)init;
- (void)setDictionary:;
- (id)initWithDictionary:;
- (id)initWithCoder:;
- (id)dictionaryValue;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (void)appendMetaData:;
+ (BOOL)supportsSecureCoding;
@end
