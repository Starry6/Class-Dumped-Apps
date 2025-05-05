@interface MPMediaPredicate : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)protobufferEncodableObject;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)initWithProtobufferDecodableObject:library:;
- (id)protobufferEncodableObjectFromLibrary:;
- (id)initWithProtobufferDecodableObject:;
- (BOOL)evaluateEntity:;
+ (BOOL)supportsSecureCoding;
@end
