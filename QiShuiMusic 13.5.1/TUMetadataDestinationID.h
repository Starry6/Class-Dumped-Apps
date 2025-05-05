@interface TUMetadataDestinationID : NSObject
@property (nonatomic) TUHandle handle;
@property (nonatomic) NSString isoCountryCode;
- (id)initWithHandle:;
- (id)handle;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)isoCountryCode;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithDestinationID:isoCountryCode:;
- (BOOL)isEqualToMetadataDestinationID:;
+ (BOOL)supportsSecureCoding;
+ (id)metadataDestinationIDsForCHRecentCall:;
+ (id)metadataDestinationIDsForCHRecentCalls:;
+ (id)metadataDestinationIDForCall:;
@end
