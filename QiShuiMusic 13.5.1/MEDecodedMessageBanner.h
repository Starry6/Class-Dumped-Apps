@interface MEDecodedMessageBanner : NSObject
@property (nonatomic) NSString title;
@property (nonatomic) NSString primaryActionTitle;
@property (nonatomic) BOOL dismissable;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (id)title;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)primaryActionTitle;
- (BOOL)isDismissable;
- (id)initWithTitle:primaryActionTitle:dismissable:;
+ (BOOL)supportsSecureCoding;
@end
