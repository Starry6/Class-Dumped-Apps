@interface CHSURLSessionToken : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (BOOL)isValid;
- (void)invalidate;
+ (BOOL)supportsSecureCoding;
@end
