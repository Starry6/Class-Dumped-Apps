@interface IDSCloudKitTransportLogChangeToken : NSObject
@property (nonatomic) IDSCKServerChangeToken ckToken;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)initWithCKToken:;
- (id)ckToken;
- (void)setCkToken:;
+ (BOOL)supportsSecureCoding;
@end
