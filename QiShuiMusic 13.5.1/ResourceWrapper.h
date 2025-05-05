@interface ResourceWrapper : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)node;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)initWithResource:;
+ (BOOL)supportsSecureCoding;
+ (id)wrapperWithResource:;
@end
