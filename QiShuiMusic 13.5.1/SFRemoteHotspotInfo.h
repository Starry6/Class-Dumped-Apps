@interface SFRemoteHotspotInfo : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) NSString password;
@property (nonatomic) NSNumber channel;
- (void)setChannel:;
- (void)setPassword:;
- (id)password;
- (void)setName:;
- (id)channel;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)name;
- (id)initWithName:password:channel:;
+ (BOOL)supportsSecureCoding;
@end
