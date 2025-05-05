@interface MRContentItemRequest : NSObject
@property (nonatomic) MRContentItem item;
@property (nonatomic) MRPlaybackQueueRequest request;
- (id)item;
- (id)initWithCoder:;
- (id)request;
- (void)encodeWithCoder:;
- (void)setItem:;
- (void).cxx_destruct;
- (id)description;
- (void)setRequest:;
- (id)initWithItem:request:;
+ (BOOL)supportsSecureCoding;
@end
