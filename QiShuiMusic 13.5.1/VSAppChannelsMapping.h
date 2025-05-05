@interface VSAppChannelsMapping : NSObject
@property (nonatomic) NSString appAdamID;
@property (nonatomic) NSArray channelIDs;
- (id)channelIDs;
- (id)init;
- (void)setChannelIDs:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)appAdamID;
- (void)setAppAdamID:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
