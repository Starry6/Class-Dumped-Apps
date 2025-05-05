@interface WiFiChannel : NSObject
@property (nonatomic) BOOL extensionChannelAbove;
@property (nonatomic) I channelNumber;
@property (nonatomic) BOOL is2_4GHz;
@property (nonatomic) BOOL is5GHz;
@property (nonatomic) BOOL isDFS;
@property (nonatomic) q bandwidth;
- (BOOL)isDFS;
- (BOOL)extensionChannelAbove;
- (long long)bandwidth;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (BOOL)is5GHz;
- (id)initWithChannelNumber:bandwidth:is2_4GHz:is5GHz:isDFS:extensionChannelAbove:;
- (id)description;
- (BOOL)is2_4GHz;
- (BOOL)isEqual:;
- (unsigned int)channelNumber;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
