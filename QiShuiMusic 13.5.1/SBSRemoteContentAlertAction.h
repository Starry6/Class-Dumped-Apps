@interface SBSRemoteContentAlertAction : NSObject
@property (nonatomic) NSString title;
@property (nonatomic) q style;
@property (nonatomic) BOOL enabled;
- (id)initWithTitle:style:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (id)title;
- (void)setEnabled:;
- (void).cxx_destruct;
- (long long)style;
- (BOOL)isEqual:;
- (BOOL)isEnabled;
+ (BOOL)supportsSecureCoding;
@end
