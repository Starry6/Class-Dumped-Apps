@interface SFAirDropTransferItem : NSObject
@property (nonatomic) NSString type;
@property (nonatomic) NSString subtype;
@property (nonatomic) q count;
@property (nonatomic) BOOL isFile;
- (id)subtype;
- (id)init;
- (void)incrementCount;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (id)type;
- (void).cxx_destruct;
- (id)description;
- (long long)count;
- (BOOL)isEqual:;
- (id)initWithType:isFile:;
- (id)initWithType:subtype:isFile:;
- (BOOL)isFile;
+ (BOOL)supportsSecureCoding;
@end
