@interface LSSpotlightAction : NSObject
@property (nonatomic) NSString identifier;
@property (nonatomic) NSString unlocalizedTitle;
@property (nonatomic) NSString symbolImageName;
- (id)init;
- (id)symbolImageName;
- (id)identifier;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (id)unlocalizedTitle;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)_initWithIdentifier:unlocalizedTitle:symbolImageName:;
- (BOOL)isEqualToSpotlightAction:;
+ (id)new;
+ (BOOL)supportsSecureCoding;
@end
