@interface WFToggleFocusModeContextualActionFocusMode : NSObject
@property (nonatomic) NSString identifier;
@property (nonatomic) NSString name;
@property (nonatomic) NSString symbolName;
@property (nonatomic) NSString colorName;
- (id)symbolName;
- (id)identifier;
- (id)colorName;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)initWithIdentifier:name:symbolName:;
- (id)initWithIdentifier:name:symbolName:colorName:;
- (id)color;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)name;
- (BOOL)isEqual:;
+ (BOOL)supportsSecureCoding;
@end
