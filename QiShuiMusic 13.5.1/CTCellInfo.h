@interface CTCellInfo : NSObject
@property (nonatomic) NSArray legacyInfo;
- (void)setLegacyInfo:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)legacyInfo;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
