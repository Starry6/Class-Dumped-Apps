@interface OspreyClientStreamContextPromise : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)finishWriting;
- (void).cxx_destruct;
- (void)fulfill:;
- (void)writeFrame:;
- (void)writeFrame:compressed:;
- (id)initWithFulfillmentQueue:;
@end
