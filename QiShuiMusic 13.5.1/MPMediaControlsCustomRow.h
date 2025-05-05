@interface MPMediaControlsCustomRow : NSObject
@property (nonatomic) NSString identifier;
@property (nonatomic) UTType type;
@property (nonatomic) NSString titleOverride;
- (id)identifier;
- (void)setType:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)type;
- (void).cxx_destruct;
- (void)setIdentifier:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)titleOverride;
- (void)setTitleOverride:;
+ (BOOL)supportsSecureCoding;
+ (id)rowWithType:titleOverride:identifier:;
@end
