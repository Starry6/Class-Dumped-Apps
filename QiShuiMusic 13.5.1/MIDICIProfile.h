@interface MIDICIProfile : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) NSData profileID;
- (id)init;
- (void)dealloc;
- (id)profileID;
- (id)bytes;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)initWithData:;
- (void).cxx_destruct;
- (id)description;
- (id)name;
- (BOOL)isEqual:;
- (id)initWithData:name:;
+ (BOOL)supportsSecureCoding;
+ (id)description;
@end
