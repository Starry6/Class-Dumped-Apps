@interface QLToolbarButtonOption : NSObject
@property (nonatomic) NSString identifier;
@property (nonatomic) NSString title;
@property (nonatomic) q style;
- (id)identifier;
- (void)setStyle:;
- (void)setTitle:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)title;
- (void).cxx_destruct;
- (id)initWithIdentifier:;
- (long long)style;
- (BOOL)isEqual:;
- (BOOL)isCancel;
+ (BOOL)supportsSecureCoding;
+ (id)cancelOption;
@end
