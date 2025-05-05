@interface CSJSDWebImageDownloaderRequestModifier : NSObject
@property (nonatomic) @? block;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithBody:;
- (id)initWithMethod:headers:body:;
- (id)modifiedRequestWithRequest:;
- (id)block;
- (id)initWithBlock:;
- (void).cxx_destruct;
- (void)setBlock:;
- (id)initWithMethod:;
- (id)initWithHeaders:;
+ (id)requestModifierWithBlock:;
@end
