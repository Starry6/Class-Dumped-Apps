@interface AVDataValueTransformer : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)dataForMessage:;
- (id)reverseTransformerForMessageData:;
+ (id)messageTransformerWithClass:;
@end
