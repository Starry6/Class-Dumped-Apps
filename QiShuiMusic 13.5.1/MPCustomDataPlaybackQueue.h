@interface MPCustomDataPlaybackQueue : MPRemotePlaybackQueue
@property (nonatomic) NSString identifier;
@property (nonatomic) NSData data;
- (id)data;
- (id)identifier;
- (id)description;
- (id)initWithIdentifier:data:;
+ (BOOL)supportsSecureCoding;
@end
