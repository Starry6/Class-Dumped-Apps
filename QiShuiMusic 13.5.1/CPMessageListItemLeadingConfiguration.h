@interface CPMessageListItemLeadingConfiguration : NSObject
@property (nonatomic) CPImageSet leadingImageSet;
@property (nonatomic) BOOL unread;
@property (nonatomic) q leadingItem;
@property (nonatomic) UIImage leadingImage;
- (id)leadingImage;
- (id)initWithCoder:;
- (BOOL)isUnread;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)initWithLeadingItem:leadingImage:unread:;
- (long long)leadingItem;
- (id)leadingImageSet;
- (void)setLeadingImageSet:;
+ (BOOL)supportsSecureCoding;
@end
