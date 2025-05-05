@interface CSJSDWebImageDownloaderResponseModifier : NSObject
@property (nonatomic) @? block;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithStatusCode:version:headers:;
- (id)modifiedResponseWithResponse:;
- (id)block;
- (id)initWithBlock:;
- (void).cxx_destruct;
- (void)setBlock:;
- (id)initWithVersion:;
- (id)initWithStatusCode:;
- (id)initWithHeaders:;
+ (id)responseModifierWithBlock:;
@end
