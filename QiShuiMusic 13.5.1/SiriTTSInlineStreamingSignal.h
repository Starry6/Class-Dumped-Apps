@interface SiriTTSInlineStreamingSignal : NSObject
@property (nonatomic) NSString text;
@property (nonatomic) NSString identifier;
@property (nonatomic) NSString description;
- (id)init;
- (id)identifier;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)text;
- (id)initWithText:identifier:;
+ (BOOL)supportsSecureCoding;
+ (void)setSupportsSecureCoding:;
@end
