@interface WFContextualActionMediaItemDescriptor : NSObject
@property (nonatomic) NSNumber playbackStoreId;
@property (nonatomic) NSString name;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)name;
- (BOOL)isEqual:;
- (id)initWithPlaybackStoreId:name:;
- (id)playbackStoreId;
+ (BOOL)supportsSecureCoding;
@end
