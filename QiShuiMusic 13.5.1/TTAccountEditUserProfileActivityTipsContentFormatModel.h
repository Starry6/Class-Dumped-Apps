@interface TTAccountEditUserProfileActivityTipsContentFormatModel : TTAccountBaseEntity
@property (nonatomic) NSString text;
@property (nonatomic) q start;
@property (nonatomic) q length;
@property (nonatomic) BOOL isBold;
- (void)setStart:;
- (long long)start;
- (void)setText:;
- (void).cxx_destruct;
- (long long)length;
- (BOOL)isBold;
- (void)setLength:;
- (id)text;
- (void)setIsBold:;
+ (unsigned long long)modelCustomMappingOptions;
@end
