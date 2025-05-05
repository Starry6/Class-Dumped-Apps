@interface PHCloudIdentifier : NSObject
@property (nonatomic) NSString localCloudIdentifier;
@property (nonatomic) NSString identifierCode;
@property (nonatomic) NSString fingerPrint;
@property (nonatomic) NSString stringValue;
- (id)identifierCode;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)fingerPrint;
- (void)encodeWithCoder:;
- (id)stringValue;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithStringValue:;
- (id)initWithLocalCloudIdentifier:identifierCode:fingerPrint:;
- (id)initAsNotFoundIdentifier;
- (id)localCloudIdentifier;
+ (BOOL)supportsSecureCoding;
+ (id)notFoundIdentifier;
+ (id)_notFoundIdentifier;
@end
