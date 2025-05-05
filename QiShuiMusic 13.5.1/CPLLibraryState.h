@interface CPLLibraryState : NSObject
@property (nonatomic) BOOL disabled;
@property (nonatomic) NSDate disabledDate;
@property (nonatomic) NSDate deleteDate;
- (void)setDisabled:;
- (BOOL)isDisabled;
- (id)redactedDescription;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)disabledDate;
- (id)deleteDate;
- (void)setDisabledDate:;
- (void)setDeleteDate:;
+ (BOOL)supportsSecureCoding;
@end
