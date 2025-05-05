@interface CLSActivityReportItem : CLSReportItem
@property (nonatomic) NSString title;
@property (nonatomic) NSString identifier;
- (id)identifier;
- (void)setTitle:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)title;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)setIdentifier:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
