@interface BDWebDefaultRequestDecorator : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)bdw_decorateRequest:;
+ (void)setDelegate:;
+ (id)delegate;
@end
