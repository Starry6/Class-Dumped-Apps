@interface PSIQueryPlaceToken : PSIQueryToken
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)parentToken;
- (id)initWithText:locationNameByCategory:;
+ (BOOL)supportsSecureCoding;
@end
