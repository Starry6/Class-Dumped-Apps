@interface TTAccountEditUserProfilePendantInfo : TTAccountBaseEntity
@property (nonatomic) NSString text;
@property (nonatomic) NSString color;
@property (nonatomic) NSString schema;
@property (nonatomic) NSString currentPendant;
- (id)currentPendant;
- (void)setCurrentPendant:;
- (id)schema;
- (void)setColor:;
- (void)setText:;
- (void)setSchema:;
- (id)color;
- (void).cxx_destruct;
- (id)text;
+ (unsigned long long)modelCustomMappingOptions;
@end
