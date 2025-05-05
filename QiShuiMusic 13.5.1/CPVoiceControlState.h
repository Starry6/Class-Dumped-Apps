@interface CPVoiceControlState : NSObject
@property (nonatomic) NSArray titleVariants;
@property (nonatomic) UIImage image;
@property (nonatomic) NSString identifier;
@property (nonatomic) BOOL repeats;
- (BOOL)repeats;
- (id)identifier;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)image;
- (id)titleVariants;
- (id)initWithIdentifier:titleVariants:image:repeats:;
+ (BOOL)supportsSecureCoding;
@end
