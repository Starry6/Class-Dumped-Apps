@interface SFEndLocalSearchFeedback : SFEndSearchFeedback
- (id)initWithCoder:;
- (void)encodeWithCoder:;
+ (BOOL)supportsSecureCoding;
@end
