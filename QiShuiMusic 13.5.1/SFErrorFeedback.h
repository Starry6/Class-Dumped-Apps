@interface SFErrorFeedback : SFFeedback
@property (nonatomic) NSError error;
- (id)initWithError:;
- (void)setError:;
- (id)error;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
+ (BOOL)supportsSecureCoding;
@end
