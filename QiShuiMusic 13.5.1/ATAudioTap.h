@interface ATAudioTap : NSObject
@property (nonatomic) ATAudioTapDescription tapDescription;
@property (nonatomic) BOOL screenSharingHost;
- (void)setScreenSharingHost:;
- (id)initWithTapDescription:;
- (id)tapDescription;
- (id)initWithCoder:;
- (BOOL)isScreenSharingHost;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
+ (BOOL)supportsSecureCoding;
@end
