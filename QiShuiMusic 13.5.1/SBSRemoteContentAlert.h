@interface SBSRemoteContentAlert : NSObject
@property (nonatomic) NSString title;
@property (nonatomic) NSString message;
@property (nonatomic) q preferredStyle;
@property (nonatomic) NSArray actions;
- (void)addAction:;
- (void)setMessage:;
- (void)setTitle:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (id)title;
- (id)actions;
- (id)message;
- (void).cxx_destruct;
- (long long)preferredStyle;
- (BOOL)isEqual:;
- (id)initWithTitle:message:preferredStyle:;
+ (BOOL)supportsSecureCoding;
@end
