@interface PLMigrationServiceOptions : NSObject
@property (nonatomic) NSString clientBundleId;
@property (nonatomic) NSString suggestedDestinationName;
@property (nonatomic) S option;
- (id)clientBundleId;
- (id)init;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (void)setOption:;
- (id)copyWithZone:;
- (BOOL)isPMSOption:;
- (id)nameForOption:;
- (id)suggestedDestinationName;
- (void)setSuggestedDestinationName:;
- (unsigned short)option;
+ (BOOL)supportsSecureCoding;
@end
