@interface ICDeveloperTokenDefaultProvider : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)invalidateCachedDeveloperTokenForClientInfo:completionHandler:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void)fetchDeveloperTokenForClientInfo:completionHandler:;
- (BOOL)isEqual:;
+ (BOOL)supportsSecureCoding;
@end
